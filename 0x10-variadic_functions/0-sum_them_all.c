#include <stdarg.h>
#include "variadic_functions.h"

/**
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list sum;

	va_start(sum, n);

	if (n == 0)
		return 0;

	for (i = 0; i < n; i++)
		va_arg(sum, int);

	va_end(sum);
}
