#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array using binary search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start_idx, end_idx, mid_idx, i;

	start_idx = 0;
	end_idx = size - 1;

	if (array == NULL)
		return (-1);
	while (start_idx <= end_idx)
	{
		printf("Searching in array: ");
		for (i = start_idx; i < end_idx ; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[end_idx]);
		mid_idx = (start_idx + end_idx) / 2;
		if (array[mid_idx] == value)
		{
			return (array[mid_idx]);
		}
		else if (array[mid_idx] > value)
		{
			end_idx = mid_idx - 1;
		}
		else
		{
			start_idx = mid_idx + 1;
		}
	}
	return (-1);
}
