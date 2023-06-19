#include "main.h"

/**
 * _strstr - locates a substring within a string
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: a pointer to the beginning of the found substring in haystack,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (0);
}
