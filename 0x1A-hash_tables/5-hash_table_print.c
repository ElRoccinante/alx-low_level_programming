#include "./hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: Pointer to the hash table to print.
 *
 * Description: This function prints the key/value pairs of the hash table
 * in the order they appear in the array. The pairs are printed within curly
 * braces, with each pair formatted as 'key': 'value'. If the hash table is
 * empty or ht is NULL, nothing is printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char comma_flag = 0;

	if (ht == NULL)
	return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
	if (ht->array[i] != NULL)
	{
	if (comma_flag == 1)
	printf(", ");

	node = ht->array[i];
	while (node != NULL)
	{
	printf("'%s': '%s'", node->key, node->value);
	node = node->next;
	if (node != NULL)
	printf(", ");
	}
	comma_flag = 1;
}
}
	printf("}\n");
}
