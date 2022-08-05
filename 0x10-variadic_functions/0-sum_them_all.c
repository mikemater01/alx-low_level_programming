#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of parameters
 *
 * Return: 0: If n == 0
 *         Otherwise return the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i, sum = 0;

	va_start(ptr, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
