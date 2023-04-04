#include "main.h"

/**
 * _memcpy - copies a block of memory from a source to a destination
 * @dest: pointer to the destination buffer where data is to be copied
 * @src: pointer to the source of data to be copied
 * @n: number of bytes to be copied
 * 
 * This function copies the values of n bytes from the location pointed by 'src'
 * to the memory block pointed by 'dest'. If the memory blocks overlap, the behavior
 * is undefined. The function returns a pointer to the destination buffer 'dest'.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
