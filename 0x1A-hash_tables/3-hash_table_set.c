#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @key: The key.
 * @value: The value.
 * @ht: The hash table.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;

	if (!ht || !value || !key || *key == '\0')
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	if (add_node_hash(&(ht->array[idx]), (char *)key, (char *)value))
		return (1);
	return (0);
}

/**
 * add_node_hash - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to pointer.
 * @key: The new key.
 * @value: The new value.
 *
 * Return: The newest node.
 */
hash_node_t *add_node_hash(hash_node_t **head, char *key, char *value)
{
	hash_node_t *new_hash, *tmp = *head;

	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (*head);
		}
		tmp = tmp->next;
	}
	new_hash = malloc(sizeof(hash_node_t));
	if (!new_hash)
		return (NULL);
	new_hash->key = strdup(key);
	new_hash->value = strdup(value);
	new_hash->next = *head;
	*head = new_hash;
	return (*head);
}
