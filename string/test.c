#include <assert.h>
#include "string.h"

int main() {
    char s[20];
    size_t n;
    static const char abcde[] = "abcde";
    static const char abcdx[] = "abcdx";

    assert(memchr(abcde, 'c', 5) == &abcde[2]);
    assert(memchr(abcde, 'e', 4) == NULL);

    assert(memcmp(abcde, abcdx, 5) != 0);
    assert(memcmp(abcde, abcdx, 4) == 0);

    assert(memcpy(s, abcde, 6) == s && s[2] == 'c');

    assert(memmove(s, s + 1, 3) == s);
    assert(memcmp(memmove(s, s + 1, 3), "aabce", 6));
    assert(memcmp(memmove(s, s + 1, 3), "aabce", 6));

    assert(memset(s, '*', 10) == s && s[9] == '*');
    assert(memset(s + 2, '%', 0) == s + 2 && s[2] == '*');
}
