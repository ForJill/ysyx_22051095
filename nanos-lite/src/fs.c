#include <fs.h>
size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENTS, FD_FB};
#define N   32
size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}
size_t serial_write(const void *buf, size_t offset, size_t len);
size_t events_read(void *buf, size_t offset, size_t len);
size_t dispinfo_read(void *buf, size_t offset, size_t len);
size_t fb_write(const void *buf, size_t offset, size_t len);
/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
  [FD_EVENTS] = {"/dev/events", 0, 0, events_read, serial_write},
  [FD_FB]     = {"/dev/fb", 0, 0, dispinfo_read, fb_write},
#include "files.h"
};
int fs_open(const char *pathname, int flags, int mode) {  
  for (int i = 0; i < sizeof(file_table) / sizeof(file_table[0]); i ++) {
    if (strcmp(pathname, file_table[i].name) == 0) {
      return i;
    }
  }
  panic("file %s not found", pathname);
  return -1;
}

size_t fs_read(int fd, void *buf, size_t len){
  Finfo *finfo = &file_table[fd];
  if(finfo->read != NULL)return finfo->read(buf, finfo->open_offset, len);
  
  //边界隔离
  if(finfo->open_offset + len > finfo->size){
    len = finfo->size - finfo->open_offset;
    //Log("len is out of edge\n");
  }
  //printf("finfo->disk_offset = %d, finfo->open_offset = %d", finfo->disk_offset, finfo->open_offset);
  size_t r = ramdisk_read(buf, finfo->disk_offset+finfo->open_offset, len);
  //printf("fs_read: fd = %d, buf = %p, len = %d, r = %d\n", fd, buf, len, r);
  finfo->open_offset += len;
  return r;
}

size_t fs_write(int fd, const void *buf, size_t len){
  assert(fd >= 0 && fd < sizeof(file_table) / sizeof(file_table[0]));
  Finfo *finfo = &file_table[fd];
  //stdout
  if(finfo->write != NULL)return finfo->write(buf, finfo->open_offset, len);

  if(finfo->open_offset + len > finfo->size){
    len = finfo->size - finfo->open_offset;
    Log("write len is out of edge\n");
  }
  
  size_t r = ramdisk_write(buf, finfo->disk_offset+finfo->open_offset, len);
  finfo->open_offset += len;
  return r;
}

size_t fs_lseek(int fd, size_t offset, int whence) {
  assert(fd >= 0 && fd < sizeof(file_table) / sizeof(file_table[0]));
  Finfo *finfo = &file_table[fd];
  switch (whence) {
    case SEEK_SET: finfo->open_offset = offset; return finfo->open_offset;
    case SEEK_CUR: finfo->open_offset += offset; return finfo->open_offset;
    case SEEK_END: finfo->open_offset = finfo->size + offset; return finfo->open_offset;
    default: return -1;
  }
}

int fs_close(int fd) {
  assert(fd >= 0 && fd < sizeof(file_table) / sizeof(file_table[0]));
  return 0;
}
void init_fs() {
  // TODO: initialize the size of /dev/fb
  file_table[FD_FB].size = io_read(AM_GPU_CONFIG).width / N * io_read(AM_GPU_CONFIG).height / N * 4;
  printf("file_width = %d, file_height = %d\n", io_read(AM_GPU_CONFIG).width, io_read(AM_GPU_CONFIG).height);
  printf("init_fs: file_table[FD_FB].size = %d\n", file_table[FD_FB].size);
}
