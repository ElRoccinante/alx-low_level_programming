#include "lists.h"


/**
 * print_listint - Prints all the elements of a singly linked list of integers.
 * @h: A pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
