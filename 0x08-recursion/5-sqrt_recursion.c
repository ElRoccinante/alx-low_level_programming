#include "main.h"

/**
 * _sqrt_recursion - Calculates the square root of a number.
 * @n: An integer input.
 * Return: The square root of n, or -1 if n is negative.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - Helper function for finding the square root recursively.
 * @prev: The previous value to check.
 * @root: The number for which the square root is being calculated.
 * Return: The square root of root, or -1 if not found.
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
