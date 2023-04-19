#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: index of first element where comparison is true, or -1 if not found
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
