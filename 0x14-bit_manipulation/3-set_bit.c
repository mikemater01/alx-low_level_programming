#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: the index starting from 0 of the bit you want to set
 * @n: pointer of an usigned long int
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
