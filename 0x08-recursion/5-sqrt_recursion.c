/**
 * _sqrt_iterative - It returns the value of square root of n.
 * @n: an input integer
 * Return: The square root of n
 */
int _sqrt_iterative(int n)
{
	if (n < 0)
		return (-1);

	int i = 1;
	while (i * i <= n)
	{
		if (i * i == n)
			return (i);
		i++;
	}

	return (-1); // Si n n'est pas un carré parfait, retourne -1
}
