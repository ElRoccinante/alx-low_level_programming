#include "main.h"
#include <stdio.h>

/**
 * strchr_custom - a function that locates a character in a string.
 * @s: a pointer to the string to search in
 * @c: the character to locate in string
 * Return: returns pointer to c position
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
