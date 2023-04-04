#include "main.h"
#include <stdio.h>

/**
 * _strstr -  A function that finds the first occurrence of a substring.
 * @haystack: The string to search in.
 * @needle: The substring to find.
 * Return:  If the substring is found - a pointer to the beginning of the located,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
