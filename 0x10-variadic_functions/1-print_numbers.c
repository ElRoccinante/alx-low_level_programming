#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints a series of numbers separated by a string
 * @separator: the string separator to use between numbers
 * @n: the number of integers to print
 *
 * This function prints a variable number of integers separated by a given
 * string separator. If the separator is NULL, it is ignored.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i = 0;
    va_list args;

    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(args, int));

        /* If separator is not NULL and not the last element, print separator */
        if (separator != NULL && i < n - 1)
            printf("%s", separator);
    }

    printf("\n");

    va_end(args);
}
