#include "main.h"

/**
 * _memset - fills a block of memory with a specified value
 *
 * This function fills a block of memory with a specified value, starting
 * from the address pointed to by 's' and continuing for 'n' bytes. The value
 * to be set is specified by the character 'b'.
 *
 * @s: a pointer to the block of memory to fill
 * @b: the value to set the memory to
 * @n: the number of bytes to fill
 *
 * Return: a pointer to the start of the filled memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
