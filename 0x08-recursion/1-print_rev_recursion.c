#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: Input string to be printed in reverse.
 * Return: None.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		/* Recursively call the function to print the rest of the string */
		_print_rev_recursion(s + 1);

		/* Print the current character */
		_putchar(*s);
	}
}
