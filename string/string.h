#ifndef _STRING
#define _STRING

#define NULL 0

#ifndef _SIZET
#define _SIZET
typedef unsigned long size_t;
#endif

void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);

#endif
