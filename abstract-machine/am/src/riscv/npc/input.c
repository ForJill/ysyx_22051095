#include <am.h>
#define KEYDOWN_MASK 0x8000
#define DEVICE_BASE 0xa0000000
#define MMIO_BASE 0xa0000000
#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  /*
  kbd->keydown = 0;
  kbd->keycode = AM_KEY_NONE;
  //更新键盘
  uint32_t key = inl(KBD_ADDR);
  if(key & KEYDOWN_MASK){ 
    kbd->keydown = true;
    kbd->keycode = (key & ~KEYDOWN_MASK);
  }
  else{
    kbd->keydown = false;
    kbd->keycode = key;
  }
  */
}
