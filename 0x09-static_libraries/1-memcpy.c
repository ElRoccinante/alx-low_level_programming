#include "main.h"

/**
 * _memcpy - copie une zone de mémoire
 * @dest: destination de la copie
 * @src: source de la copie
 * @n: nombre d'octets à copier
 * Return: pointeur vers l'emplacement de la copie
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
