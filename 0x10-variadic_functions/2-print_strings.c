#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  print_strings - prints a series of strings separated by a given separator.
 * @separator: the string separator to be printed between the strings.
 * @n: the number of strings to be printed.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strarg;

	va_start(strarg, n);

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(strarg, char*);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strarg);
}
