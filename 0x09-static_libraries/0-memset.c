#include "main.h"

/**
 * _memset - remplit la mémoire avec des octets constants
 * @s: pointeur vers l'emplacement à remplir
 * @b: octet à utiliser pour remplir l'emplacement
 * @n: nombre d'octets à remplir
 * Return: renvoie un pointeur vers l'emplacement rempli
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
