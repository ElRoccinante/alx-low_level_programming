#include "main.h"

/**
 * wildcmp - Une fonction qui compare deux chaînes de caractères
 * @s1: Premier argument chaîne de caractères
 * @s2: Deuxième argument chaîne de caractères
 * Return: 1 si les chaînes sont identiques, 0 sinon
 */
int wildcmp(char *s1, char *s2)
{
    if (!*s1 && !*s2)
        return (1);
    if (*s1 == *s2)
        return (wildcmp(s1 + 1, s2 + 1));
    if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
        return (1);
    if (*s2 == '*' && *(s1 + 1) && *s2)
        return (0);
    return (0);
}
