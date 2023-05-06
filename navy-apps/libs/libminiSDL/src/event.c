#include <NDL.h>
#include <SDL.h>
#include <string.h>
#define keyname(k) #k,
uint8_t keystatus[84];
static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  printf("SDL_PushEvent");
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  char buf[1024];
  if(NDL_PollEvent(buf, sizeof(buf))){
    if(buf[0] == 'k'){
      if(buf[1] == 'd'){
        ev->type = SDL_KEYDOWN;
      }
      else if(buf[1] == 'u'){
        ev->type = SDL_KEYUP;
      }
      ev->key.keysym.sym = 0;
      for(int i = 0; i < (sizeof(keyname)); i ++){
        if(strcmp(buf + 3, keyname[i]) == 0){
          if(ev->type == SDL_KEYDOWN)
            keystatus[i] = 1;
          else if(ev->type == SDL_KEYUP)
            keystatus[i] = 0;
          ev->key.keysym.sym = i;
          return 1;
        }
      }
    }
    return 0;
  }
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  while(1){
    if(SDL_PollEvent(event)) {
      return 1;
    }
  }
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("SDL_PeepEvents");
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  printf("SDL_GetKeyState");
  return keystatus;
}
