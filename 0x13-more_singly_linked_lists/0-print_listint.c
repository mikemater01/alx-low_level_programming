#include "lists.h"

/**
 * print_listint - prints the elments of a list
 * @h: head of a list
 *
 * Return: the numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
