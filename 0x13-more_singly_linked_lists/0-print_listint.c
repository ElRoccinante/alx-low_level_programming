#include "lists.h"

/**
 * print_listint - Prints all the elements of a singly linked list of integers
 * @h: A pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t cmp = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cmp++;
		h = h->next;
	}
	return (cmp);
}
