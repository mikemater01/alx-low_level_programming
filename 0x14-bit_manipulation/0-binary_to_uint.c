#include "main.h"

/**
 * binary_to_unit - Converts a binary number to an unsigned int
 * @b: points to a string of 0s and 1s
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i, j = 0;

if (!b)
{
return (0);
}
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
{
return (0);
}
j = 2 * j + (b[i] - '0');
}
return (j);
}
