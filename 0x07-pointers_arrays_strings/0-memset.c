#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * This function fills a block of memory with the specified value 'b' for 'n' bytes,
 * starting from the memory location 's'.
 *
 * Return: a pointer to the memory location 's' after it has been modified
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* Initialize a counter variable */
	int i = 0;

	/* Loop through the block of memory, changing each byte to 'b' */
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	/* Return a pointer to the memory location 's' after it has been modified */
	return (s);
}
