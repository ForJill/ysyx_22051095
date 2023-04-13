#include <stdio.h>
#include <NDL.h>
int main() {
  int sec = 1;
  long init_time = NDL_Init(0);
  while (1) {
    while ((NDL_GetTicks()-init_time)/1000000 < sec);
    printf("sec = %d\n", sec);
    sec ++;
  }
}
