#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to the string to be printed
 *
 * Description: Takes a string and prints it to the standard output
 */
void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
