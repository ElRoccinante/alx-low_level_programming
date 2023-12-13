#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array using binary search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: The index where value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, prv, j;

	if (array == NULL || size == 0)
		return (-1);
	i = 0;
	while (array[i] < value && i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		prv = i;
		i += sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prv, i);
	for (j = prv; j <= i && j < size; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
