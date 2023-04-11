#include "main.h"
#include <stdlib.h>

/**

create_array - Creates an array of chars and initializes it with a specific char.

@c: Char to initialize the array with.

@size: Number of bytes to allocate.

Return: A pointer to the array, or NULL if it fails.
*/
char *create_array(unsigned int size, char c)
{
char *array = malloc(size);

if (size == 0 || array == NULL)
return (NULL);

while (size--)
array[size] = c;

return (array);
}
