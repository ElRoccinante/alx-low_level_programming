#include "main.h"

/**
 * factorial - Calculate factorial of a number.
 * @n: Input integer
 *
 * Return: Factorial of n, -1 for negative numbers
 */
int factorial(int n)
{
	int result = 1; /* Initialize result to 1 */

	if (n < 0) /* If n is negative */
		return (-1);
	
	while (n > 1)
	{
		result *= n;
		n--;
	}
	
	return result;
}
