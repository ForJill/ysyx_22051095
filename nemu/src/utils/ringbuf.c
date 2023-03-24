#include "ringbuf.h"
//create ringbuffer
void ringbuf_create(ringbuf *rb, size_t size)
{
    rb->buf = malloc(size);
    rb->head = rb->tail = rb->buf;
    rb->size = size;
}
//destroy ringbuffer
void ringbuf_destroy(ringbuf *rb)
{
    free(rb->buf);
}
//read ringbuffer
size_t ringbuf_read(ringbuf *rb, char *buf, size_t len)
{
    char *p = buf;
    while (len > 0 && rb->head != rb->tail)
    {
        *p++ = *rb->head++;
        if (rb->head == rb->buf + rb->size)
            rb->head = rb->buf;
        len--;
    }
    return p - buf;
}
//write ringbuffer
void ringbuf_write(ringbuf *rb, char *buf, size_t len)
{
    char *p = buf;
    while (len > 0 && rb->head != rb->tail + 1)
    {
        *rb->tail++ = *p++;
        if (rb->tail == rb->buf + rb->size)
            rb->tail = rb->buf;
        len--;
    }
}

