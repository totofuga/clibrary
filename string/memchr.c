#include "string.h"

void *memchr(const void* s, int c, size_t n) {
    unsigned char uc = c;
    const unsigned char *us = (const unsigned char*)s;

    for (; 0 < n; ++us, --n) {
        if ( *us == c ) {
            return (void *)us;
        }
    }
    return NULL;
}
