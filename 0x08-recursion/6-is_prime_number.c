/**
 * is_prime_number - Une fonction qui vérifie si un nombre est premier.
 * @n: un entier en entrée
 * Retourne : 1 si n est premier, sinon 0
 */
int is_prime_number(int n)
{
	int div;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	for (div = 2; div <= n / 2; div++)
	{
		if (n % div == 0)
			return (0);
	}

	return (1);
}
