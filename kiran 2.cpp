#ifndef VECTOR_H
#define VECTOR_H

#include <stddef.h>

typedef struct {
    int* data;
    size_t size;
    size_t capacity;
} Vector;

void vector_init(Vector* v);
void vector_push(Vector* v, int value);
void vector_free(Vector* v);

#endif
