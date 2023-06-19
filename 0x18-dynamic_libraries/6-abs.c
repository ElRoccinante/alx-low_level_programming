#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: Number to compute
 *
 * Return: The absolute value of the number. If the number is negative,
 *         it returns the number multiplied by -1. Otherwise, it returns
 *         the number itself.
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
