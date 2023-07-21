#include <common.h>
#include <fs.h>
#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif
#define N   32
#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  for (size_t i = 0; i < len; i ++) {
    putch(((char *)buf)[i]);
  }
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  if (ev.keycode == AM_KEY_NONE) {
    *(char*)buf = '\0';
    return 0;
  }
  int ret = snprintf(buf, len, "%s %s", ev.keydown?"kd":"ku", keyname[ev.keycode]);
  return ret;
}


size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  int fd = fs_open("/proc/dispinfo", 0,0);
  //将文件的len字节写到buf中
  return fs_read(fd, buf, len);
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T cfg = io_read(AM_GPU_CONFIG);
  printf("fb_write_cfg: %d %d\n", cfg.width, cfg.height);
  AM_GPU_FBDRAW_T ctl;
  ctl.pixels = (void*)buf;
  ctl.sync = true;
  ctl.w = (len >> 32) & 0xffffffff;
  ctl.h = len & 0xffffffff;
  ctl.x = offset % cfg.width;
  ctl.y = offset / cfg.width;
  printf("fb_write: %d %d %d %d\n", ctl.x, ctl.y, ctl.w, ctl.h);
  ioe_write(AM_GPU_FBDRAW, &ctl);
  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
