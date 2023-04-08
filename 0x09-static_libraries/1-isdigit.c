#include "main.h"

/**
 * _isdigit - Vérifie si un caractère est un chiffre (de 0 à 9).
 * @c: Un entier en entrée
 * Return: 1 si c est un chiffre, sinon 0
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
