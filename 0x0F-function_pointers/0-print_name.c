#include "function_pointers.h"
#include <stdio.h>

/**
 * display_name - displays name using pointer to function
 * @name: string to display
 * @func: pointer to function
 *
 * Return: void
 **/
void display_name(char *name, void (*func)(char *))
{
	if (name == NULL || func == NULL)
		return;

	func(name);
}
