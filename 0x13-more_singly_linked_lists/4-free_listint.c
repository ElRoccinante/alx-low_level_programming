#include "lists.h"

/**
 * free_listint - frees a linked list of integers
 * @head: pointer to the first node of the linked list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *current_node, *next_node;

	current_node = head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
