#include "main.h"

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0') // Parcours la chaîne de caractères jusqu'à la fin
		len++;
	return (len); // Retourne la longueur de la chaîne
}
