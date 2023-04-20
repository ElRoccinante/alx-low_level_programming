#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of parameters to sum
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    int sum = 0;
    unsigned int i;

    // if there are no parameters, return 0
    if (n == 0)
    {
        return (0);
    }

    // initialize argument list
    va_start(args, n);

    // iterate over all parameters and add them to the sum
    for (i = 0; i < n ; i++)
    {
        sum += va_arg(args, int);
    }

    // cleanup argument list
    va_end(args);

    // return the sum
    return (sum);
}
