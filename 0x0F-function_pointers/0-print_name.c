#include "function_pointers.h"

/**
 * print_name - prints a name using a pointer to function
 *
 * @name: pointer to string to be printed
 * @f: pointer to function to be used to print the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
