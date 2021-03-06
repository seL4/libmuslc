/* @LICENSE(MUSLC_MIT) */

#include <string.h>

char *__stpcpy(char *, const char *);

char *strcpy(char *dest, const char *src)
{
#if 1
	__stpcpy(dest, src);
	return dest;
#else
	const unsigned char *s = src;
	unsigned char *d = dest;
	while ((*d++ = *s++));
	return dest;
#endif
}
