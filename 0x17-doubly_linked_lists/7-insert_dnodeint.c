#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a the_node
 *								at a given position
 * @h: double pointer to a double linked list
 * @idx:  index of the list where the new the_node should be added.
 *			Index starts at 0
 * @n: value for the new the_node
 * Return: the address of the new the_node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *the_node;
	dlistint_t *aux = *h;
	unsigned int count = 0;

	if (h == NULL || (idx != 0 && *h == NULL))
		return (NULL);
	if (idx == 0)
	{
		the_node = malloc(sizeof(dlistint_t));
		if (the_node == NULL)
			return (NULL);
		the_node->n = n;
		the_node->prev = NULL;
		if (*h == NULL)
			the_node->next = NULL;
		else
		{
			the_node->next = *h;
			(*h)->prev = the_node;
		}
		*h = the_node;
		return (the_node);
	}
	while (aux->next && count != (idx - 1))
	{
		aux = aux->next;
		count++;
	}
	if (idx - 1 != count)
		return (NULL);
	the_node = malloc(sizeof(dlistint_t));
	if (the_node == NULL)
		return (NULL);
	the_node->n = n;
	if (aux->next)
		aux->next->prev = the_node;
	the_node->prev = aux;
	the_node->next = aux->next;
	aux->next = the_node;
	return (the_node);
}
