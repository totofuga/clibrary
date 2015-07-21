#include "string.h"

void *memcpy(void *d, const void *s, size_t n) {
    unsigned char *sd = d;
    unsigned const char *ss = s;

    for (; n > 0; --n, ++sd, ++ss) {
        *sd = *ss;
    }

    return d;
}
