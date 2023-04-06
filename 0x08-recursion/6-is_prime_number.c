/**
 * is_prime_number - A function that checks if a number is prime.
 * @n: an input integer
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int div;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	if (n % 2 == 0)
		return (0); /* Even numbers (except 2) are not primes */

	/* Only check up to the square root of n */
	for (div = 3; div * div <= n; div += 2)
	{
		if (n % div == 0)
			return (0);
	}

	return (1);
}
