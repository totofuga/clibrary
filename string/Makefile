OBJS = test.o memchr.o memcmp.o memcpy.o memset.o

test: ${OBJS}
	gcc ${CFLAGS} ${OBJS} -o test

.c.o:
	gcc  ${CFLAGS} -c $<
