#include "string.h"

void *memmove(void *d, const void *s, size_t n) {
    unsigned char *sd = d;
    unsigned const char *ss = s;

    if ( ss < sd && ss + n > sd ) {
        for(ss + n, sd + n; n > 0; --n, --sd, --ss) {
            *sd = *ss;
        }
    } else {
        for(; n > 0; --n; ++sd, ++ss) {
            *sd = *ss;
        }
    }
    return d;
}

