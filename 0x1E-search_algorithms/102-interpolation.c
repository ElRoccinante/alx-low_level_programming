#include "search_algos.h"
/**
 * interpolation_search - Searches for a value in a sorted array using
 *                         the interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the value if found, or -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (!array)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		pos = low + (((double)(high - low) / (
						array[high] - array[low])) * (value - array[low]));

		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;

		if (array[pos] > value)
			high = pos - 1;
	}
	return (-1);
}
