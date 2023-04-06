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

	return (_sqrt_helper(n, 0, n));
}

/**
 * _sqrt_helper - Calcule la racine carrée de n en utilisant la recherche binaire.
 * @n: La valeur dont on cherche la racine carrée.
 * @start: La valeur de départ pour la recherche binaire.
 * @end: La valeur de fin pour la recherche binaire.
 * Return: La racine carrée de n.
 */
int _sqrt_helper(int n, int start, int end)
{
	if (start > end)
		return (-1);

	int mid = start + (end - start) / 2;
	int square = mid * mid;

	if (square == n)
		return (mid);
	else if (square > n)
		return (_sqrt_helper(n, start, mid - 1));
	else
		return (_sqrt_helper(n, mid + 1, end));
}
