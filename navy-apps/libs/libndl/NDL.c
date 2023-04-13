#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <NDL.h>
static int evtdev = 3;
static int fbdev = 4;
static int screen_w = 0;
static int screen_h = 0;

uint32_t NDL_GetTicks() {
  struct timeval tv;
  gettimeofday(&tv, NULL);
  uint64_t now = tv.tv_sec * 1000000 + tv.tv_usec;
  return now;
}

int NDL_PollEvent(char *buf, int len) {
  return read(evtdev, buf, len);
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
  //读取文件到buf
  char buf[64];
  int len = read(fbdev, buf, sizeof(buf) - 1);
  if (len <= 0) {
    printf("read fbdev failed");
    exit(1);
  }
  buf[len] = '\0';
  //解析buf,取每行冒号右边的值
  char *wstr = strchr(buf, ':') + 1;
  char *hstr = strchr(wstr, ':') + 1;
  screen_w = atoi(wstr);
  screen_h = atoi(hstr);
  if(*w == 0 && *h == 0) {
    *w = screen_w;
    *h = screen_h;
  }
  printf("w = %d, h = %d\n", *w, *h);
  printf("screen_w = %d, screen_h = %d", screen_w, screen_h);
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  size_t len = ((size_t)w << 32 | (size_t)h);
  write(fbdev, pixels, len);
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  struct timeval tv;
  gettimeofday(&tv, NULL);
  int init_time = tv.tv_sec * 1000000 + tv.tv_usec;
  return init_time;
}

void NDL_Quit() {
}
