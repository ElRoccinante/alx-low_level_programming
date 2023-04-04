#include "main.h"

/**
 * _memcpy - Copies a specified number of bytes from one memory address to another
 *
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;

	/* Copy each byte from source to destination */
	for (int r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}

	/* Return a pointer to the destination memory area */
	return (dest);
}
