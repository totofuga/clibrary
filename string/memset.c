#include "string.h"

void *memset(void *s, int i, size_t n) {
    char *sc = s;
    char c = i;
    for(; n > 0; --n, ++sc) {
        *sc = c;
    }
    return s;
}
