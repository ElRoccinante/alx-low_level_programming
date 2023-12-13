#include "search_algos.h"
/**
 * bin_search - Binary search algorithm to find the index of a value.
 * @array: Pointer to the first element of the array to search in.
 * @l: Left index of the search range.
 * @r: Right index of the search range.
 * @value: Value to search for.
 *
 * Return: The index of the value if found, or -1 if not found.
 */
int bin_search(int *array, size_t l, size_t r, int value)
{
	size_t left = l, right = r - 1, mid = 0, i = 0;

	if (array != NULL)
	{
		while (left <= right)
		{
			mid = (left + right) / 2;
			printf("Searching in array: ");
			for (i = left; i < right; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[i]);
			if (array[mid] < value)
				left = mid + 1;
			else if (array[mid] > value)
				right = mid - 1;
			else
				return (mid);
		}
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using
 *                      the exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the value if found, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t b = 1, min = 0;
	int res;

	if (array != NULL)
	{
		while (b < size && array[b] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", b, array[b]);
			b = b * 2;
		}
		if (b + 1 < size)
			min = b + 1;
		else
			min = size;
		printf("Value found between indexes [%lu] and [%lu]\n", b / 2, min - 1);
		res = bin_search(array, b / 2, min, value);
		if (res != -1)
			return (res);
	}
	return (-1);
}
