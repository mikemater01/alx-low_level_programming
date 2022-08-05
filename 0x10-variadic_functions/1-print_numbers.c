#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers - A function that prints numbers, followed by a new line
 *@seperator: A string printed between numbers
 *@n: The number of integers passed into the function
 *@...: A variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int);
		if (i != n - 1 && seperator != NULL)
			printf("%s", seperator);
	}
	va_end(numbers);

	putchar('\n');
}
