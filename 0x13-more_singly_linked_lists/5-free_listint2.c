#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of the linked list
 *
 * Return: returns nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
