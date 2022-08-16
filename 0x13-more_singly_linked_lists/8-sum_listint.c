#include "lists.h"

/**
 * sum_listint - sums all the data(n) of a linked list
 * @head : head of linked list
 *
 * Return: Returns the sum of all the data(n). and0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
