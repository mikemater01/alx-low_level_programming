#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - Function prototype
 * @separator: String to be printed between strings
 * @n: number of strings passed to the function
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Return: void
 * **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list woh;
	unsigned int x;
	char *ptr;

	va_start(woh, n);
	for (x = 0; x < n; x++)
	{
		ptr = va_arg(woh, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
			if (x < (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(woh);
	putchar('\n');
}
