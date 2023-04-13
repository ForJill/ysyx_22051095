#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t ret = 0;
  while (*s++) ret++;
  return ret;
}
size_t strnlen(const char *s, size_t count) {
  size_t ret = 0;
  while (*s++ && ret < count) ret++;
  return ret;
}


char *strcpy(char *dst, const char *src) {
  char *ret = dst;
  while ((*dst++ = *src++)!='\0');
  return ret;
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  char *ret = dst;
  while (*dst) dst++;
  while ((*dst++ = *src++)!='\0');
  return ret;
}

int strcmp(const char *s1, const char *s2) {
  while (*s1 && *s1 == *s2) s1++, s2++;
  return *s1 - *s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  while (n && *s1 && *s1 == *s2) n--, s1++, s2++;
  return n ? *s1 - *s2 : 0;
}

void *memset(void *s, int c, size_t n) {
  char *p = s;
  while(n--) *p++ = c;
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  if(in==NULL||out==NULL) return NULL;
  void *ret = out;
  if(out <= in || (char *)out >= (char *)in+n){
    while(n--){
      *(char *)out = *(char *)in;
      out = (char *)out + 1;
      in = (char *)in + 1;
    }
  }
  else{
    out = (char *)out + n - 1;
    in = (char *)in + n - 1;
    while(n--){
      *(char *)out = *(char *)in;
      out = (char *)out - 1;
      in = (char *)in - 1;
    }
  }
  return ret;
}

int memcmp(const void *s1, const void *s2, size_t n) {  
  const unsigned char *p1, *p2;
  int ret = 0;
  for(p1 = s1, p2 = s2; n > 0; p1++, p2++, n--){
    if((ret = *p1 - *p2) != 0 || *p1 == '\0') break;
  }
  return ret;
}

#endif
