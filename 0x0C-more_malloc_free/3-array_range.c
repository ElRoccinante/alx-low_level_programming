#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
    int *ptr;
    int i;

    if (min > max)
        return (NULL);

    
    int size = max - min + 1;

    
    ptr = malloc(sizeof(int) * size);

    if (!ptr)
        return (NULL);

    
    int current_value = min;
    i = 0;
    while (i < size)
    {
        ptr[i++] = current_value++;
    }

    return (ptr);
}
