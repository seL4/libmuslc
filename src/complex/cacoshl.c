/* @LICENSE(MUSLC_MIT) */

#include "libm.h"

#if LDBL_MANT_DIG == 53 && LDBL_MAX_EXP == 1024
long double complex cacoshl(long double complex z)
{
	return cacosh(z);
}
#else
long double complex cacoshl(long double complex z)
{
	z = cacosl(z);
	return cpackl(-cimagl(z), creall(z));
}
#endif
