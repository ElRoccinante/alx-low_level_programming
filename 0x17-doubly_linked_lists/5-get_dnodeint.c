#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to retrieve.
 *
 * Return: If the node does not exist, returns NULL.
 *         Otherwise, returns a pointer to the nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;
dlistint_t *current = head;

	while (current != NULL)
{
	if (count == index)
	return (current);
		current = current->next;
		count++;
}

	return (NULL);
}
