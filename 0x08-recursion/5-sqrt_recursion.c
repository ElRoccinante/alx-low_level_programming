#include <stdio.h>

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The number to compute the square root for.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	if (n == 0 || n == 1)
		return n;

	return _sqrt_helper(n, 1, n);
}

/**
 * _sqrt_helper - Recursive helper function to compute the square root of a number.
 * @n: The number to compute the square root for.
 * @start: The starting value for the binary search.
 * @end: The ending value for the binary search.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_helper(int n, int start, int end)
{
	if (start <= end)
	{
		int mid = start + (end - start) / 2;

		if (mid * mid == n)
			return mid;
		else if (mid * mid < n)
			return _sqrt_helper(n, mid + 1, end);
		else
			return _sqrt_helper(n, start, mid - 1);
	}
	else
	{
		return -1;
	}
}
