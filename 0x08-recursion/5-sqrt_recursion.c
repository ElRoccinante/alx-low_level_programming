/**
 * _sqrt_iterative - It returns the value of square root of n.
 * @n: an input integer
 * Return: The square root of n
 */
int _sqrt_iterative(int n)
{
	if (n < 0)
		return (-1);

	int i = 0;
	int result = 0;
	while (result < n)
	{
		i++;
		result = i * i;
	}
	if (result > n)
		return (-1);
	else
		return (i);
}
