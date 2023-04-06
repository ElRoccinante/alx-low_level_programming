#include "main.h"

/**
 * _sqrt_recursion - Calcule la racine carrée de n.
 * @n: Un entier en entrée.
 * Return: La racine carrée de n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	int prev = 1;
	return (_sqrt(prev, n));
}

/**
 * _sqrt - Calcule la racine carrée.
 * @prev: La valeur précédente.
 * @root: La valeur de la racine carrée.
 * Return: La racine carrée.
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	else
		return (_sqrt(prev + 1, root));
}
