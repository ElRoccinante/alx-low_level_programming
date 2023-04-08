#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0; 
	char *temp = dest, *start = src;

	while (*src) // Loop to calculate the length of src string
	{
		srclen++;
		src++;
	}

	srclen++; // Include null terminator in the length

	if (n > srclen) // If n is greater than src length, set n to src length
		n = srclen;

	src = start; // Reset src pointer to the beginning of the string

	for (; i < n; i++) // Loop to copy n characters from src to dest
		*dest++ = *src++;

	return (temp); // Return the pointer to the resulting string
}
