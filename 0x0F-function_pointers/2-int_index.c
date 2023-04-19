#include "function_pointers.h"

/**
 * int_index - returns the index
 *             does not return 0
 *
 * @array: the array to search through
 * @size: the size of the array
 * @cmp: a pointer to the comparison function to use
 *
 * Return: the index of the first element for which cmp does not return 0,
 *         or -1 if no such element is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	do {
		if (cmp(array[i]))
			return (i);
		i++;
	} while (i < size);

	return (-1);
}
