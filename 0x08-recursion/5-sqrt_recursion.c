#include <stdio.h>

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Check for invalid input */
		return -1;
	if (n == 0 || n == 1) /* Base case: square root of 0 and 1 is itself */
		return n;

	return _sqrt_helper(n, 1, n); /* Call helper function to calculate square root */
}

/**
 * _sqrt_helper - Helper function to calculate square root recursively.
 * @n: The number to calculate the square root of.
 * @start: The starting value for searching the square root.
 * @end: The ending value for searching the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_helper(int n, int start, int end)
{
	if (start <= end)
	{
		int mid = start + (end - start) / 2;
		int square = mid * mid;

		if (square == n)
			return mid;
		else if (square < n)
			return _sqrt_helper(n, mid + 1, end);
		else
			return _sqrt_helper(n, start, mid - 1);
	}

	return -1; /* Return -1 if n does not have a natural square root */
}

int main(void)
{
	int r;

	r = _sqrt_recursion(1);
	printf("%d\n", r); /* Expected output: 1 */
	r = _sqrt_recursion(1024);
	printf("%d\n", r); /* Expected output: 32 */
	r = _sqrt_recursion(16);
	printf("%d\n", r); /* Expected output: 4 */
	r = _sqrt_recursion(17);
	printf("%d\n", r); /* Expected output: -1 */
	r = _sqrt_recursion(25);
	printf("%d\n", r); /* Expected output: 5 */
	r = _sqrt_recursion(-1);
	printf("%d\n", r); /* Expected output: -1 */

	return 0;
}
