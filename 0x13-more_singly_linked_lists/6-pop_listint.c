#include "lists.h"

/**
 * pop_listint - Removes the first node of a linked list and returns its data.
 * @head: Pointer to a pointer to the head node of the linked list.
 *
 * Return: The data of the removed head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (!head || !*head)
		return (0);

	head_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (head_data);
}
