#include "lists.h"

/**
 * free_listint2 - Deallocates a listint_t list and sets the head to NULL.
 * @head: Pointer to a pointer to the head node of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (!head)
		return;
	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	head = NULL;
}
