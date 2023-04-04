#include "main.h"

/**
 * _memset - Fills a block of memory with a specified value
 * @s: A pointer to the block of memory to fill
 * @b: The value to fill the block of memory with
 * @n: The number of bytes to fill
 *
 * Return: A pointer to the block of memory
 */
char *_memset(char *s, char b, unsigned int n)
{
    /* Save the starting pointer to return later */
    char *start = s;

    /* Fill the block of memory pointed to by s with the value b, n times */
    while (n--)
    {
        *s = b;
        s++;
    }

    /* Return the starting pointer */
    return (start);
}
