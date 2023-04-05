#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
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
}
