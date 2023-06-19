#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to be concatenated
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; j < n; j++)
	{
		if (*(src + j) != '\0')
		{
			*(dest + i) = *(src + j);
			i++;
		}
		else
			return (dest);
	}
	*(dest + i) = '\0';
	return (dest);
}
