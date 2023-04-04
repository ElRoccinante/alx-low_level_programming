#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: pointer to the destination memory area
 *
 * @src: pointer to the source memory area
 *
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination memory area
 */
char *_memcpy(char *dest, const char *src, unsigned int n)
{
    unsigned int i = 0;
    
    // Copy n bytes from src to dest
    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }

    return (dest);
}
