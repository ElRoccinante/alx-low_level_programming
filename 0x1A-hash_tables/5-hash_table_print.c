#include "hash_tables.h"
#include "stdio.h"

/**
 * check_hash_table - Count the number of elements in a hash table.
 * @hash: The array of hash nodes.
 * @size: The size of the array.
 *
 * Return: The number of elements.
 */
int check_hash_table(hash_node_t **hash, unsigned long int size);

/**
 * hash_table_print - Print a hash table.
 * @ht: The hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	int i = 0, check, prchick = 0;
	hash_node_t *set;

	if (!ht)
		return;
	check = check_hash_table(ht->array, ht->size);
	fprintf(stdout, "{");
	while (i < (int)ht->size)
	{
		set = ht->array[i];
		while (set)
		{
			fprintf(stdout, "'%s': '%s'", set->key, set->value);
			prchick++;
			if (prchick != check)
				fprintf(stdout, ", ");
			set = set->next;
		}
		i++;
	}
	fprintf(stdout, "}\n");
}

/**
 * check_hash_table - Count the number of elements in a hash table.
 * @hash: The array of hash nodes.
 * @size: The size of the array.
 *
 * Return: The number of elements.
 */
int check_hash_table(hash_node_t **hash, unsigned long int size)
{
	int check = 0, i = 0;
	hash_node_t *set;

	while (i < (int)size)
	{
		set = hash[i];
		while (set)
		{
			check++;
			set = set->next;
		}
		i++;
	}
	return (check);
}
