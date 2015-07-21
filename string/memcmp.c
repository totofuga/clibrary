#include "string.h"

int memcmp(const void *s1, const void *s2, size_t n) {
    unsigned const char *us1 = s1;
    unsigned const char *us2 = s2;

    for (; n > 0; --n, ++s1, ++s2) {
        if ( *us1 !=  *us2  ) {
            if ( *us1 < *us2 ) {
                return -1;
            } else {
                return 1;
            }
        }
    }
    return 0;
}
