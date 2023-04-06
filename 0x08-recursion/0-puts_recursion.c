#include "main.h"

/**
 * _puts_recursion - Prints a string recursively, followed by a newline.
 * @s: Pointer to the input string to be printed.
 *
 * Return: None
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s); /* Print the current character */
		_puts_recursion(s + 1); 
/* Call the function recursively with the next character */
	}
	else
	{
		_putchar('\n'); /* Print a newline when end of string is reached */
	}
}
