#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creaates an array of characters
 * @size: Size of array
 * @c: Character
 * Return: A
 */
char *create_array(unsigned int size, char c)

{

		char *cr;

			unsigned int i;



				if (size == 0)

							return (NULL);



					cr = malloc(sizeof(c) * size);



						if (cr == NULL)

									return (NULL);



							for (i = 0; i < size; i++)

										cr[i] = c;



								return (cr);

=======
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
>>>>>>> 603d20dfcf7f1f69d5a7bbe6123259b056164f96
}
