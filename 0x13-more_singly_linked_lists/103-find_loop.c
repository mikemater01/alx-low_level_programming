#include "lists.h"

/**
 * find_listint_loop -finds loop in a linked list
 * @head: head of a lnked list
 *
 * Return: Returns the address of node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *hare;

	/* determine if loop exists by seeing if turtle and hare meets */
	/* start them at head, move turtle one node and hare two nodes */
	turtle = hare = head;

	while (turtle != NULL && hare != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;

		if (turtle == hare)
		{
			/* start turtle at head and hare at address they met */
			/* move turtle and hare one node to find loop origin */
			turtle = head;
			while (turtle != hare)
			{
				turtle = turtle->next;
				hare = hare->next;
			}
			return (turtle);
		}
	}

	return (NULL);
}
