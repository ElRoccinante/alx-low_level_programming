#include "main.h"

/**
 * malloc_checked - Allocates memory and terminates process with status value of 98 if allocation fails
 *
 * @b: Size of memory to be allocated
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);
    
    if (ptr == NULL)
    {
        printf("Error: malloc failed\n");
        exit(98);
    }
    
    return ptr;
}
