#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: A character to initialize the array
 * Return: A pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	// Allocate memory for the array
	char *s = (char *)malloc(size * sizeof(char));

	// Check if memory allocation fails
	if (s == NULL)
		return NULL;

	// Check if size is 0 and return NULL
	if (size == 0)
		return NULL;

	// Declare the loop counter variable
	unsigned int i;

	// Initialize the array with the specified character
	for (i = 0; i < size; i++)
		s[i] = c;

	// Return the pointer to the array
	return s;
}
