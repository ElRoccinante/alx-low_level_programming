#include "search_algos.h"

/**
 * prob - Probabilistic search algorithm.
 * @array: Pointer to the list.
 * @value: The value to search for.
 * @low: The starting index of the list.
 * @high: The ending index of the list.
 *
 * Return: The index where value is located, or -1 if not found.
 */
size_t prob(int *array, int value, size_t low, size_t high)
{
    /* Check if low index exceeds high index or calculated position is out of range */
    if (low > high || low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low])) >= high)
    {
        printf("Value checked is out of range or not found\n");
        return (-1);
    }

    /* Calculate the probable position using interpolation formula */
    size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

    /* Print the value checked at the calculated position */
    printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

    /* Check if the value is found at the calculated position */
    if (array[pos] == value)
        return (pos);

    /* Recursively search in the appropriate subarray */
    return (array[pos] > value ? prob(array, value, low, pos - 1) : prob(array, value, pos + 1, high));
}

/**
 * interpolation_search - Interpolation search algorithm.
 * @array: Pointer to the list.
 * @size: The size of the list.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
    /* Check for NULL array */
    if (!array)
        return (-1);

    /* Call the prob function to perform interpolation search */
    return (prob(array, value, 0, size - 1));
}
