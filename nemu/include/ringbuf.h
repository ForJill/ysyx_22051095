#ifndef __RINGBUF_H__
#define __RINGBUF_H__
#include <stdint.h>
#include <stdlib.h>

typedef struct
{
    uint8_t *buf;
    uint8_t *head, *tail;
    size_t size;
}ringbuf;

void ringbuf_create(ringbuf *rb, size_t size);
void ringbuf_destroy(ringbuf *rb);
size_t ringbuf_read(ringbuf *rb, char *buf, size_t len);
void ringbuf_write(ringbuf *rb, char *buf, size_t len);

#endif