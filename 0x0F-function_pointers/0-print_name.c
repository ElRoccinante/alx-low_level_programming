#include <stdio.h>
#include "function_pointers.h"

/* Define a typedef for the function pointer */
typedef void (*func_ptr)(char *);

/* Define the function which prints the name */
void print_name(char *name, func_ptr f);

/* Implement the function */
void print_name(char *name, func_ptr f)
{
	/* Check if the arguments are valid */
	if (name == NULL || f == NULL) {
		return;
	}

	/* Call the function using the function pointer */
	f(name);
}
