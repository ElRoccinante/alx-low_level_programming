#include "main.h"

/**
 * _strlen_recursion - Calculate string length recursively.
 * @s: Pointer to input string
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
    if (*s)
        return (1 + _strlen_recursion(s + 1));
    return (0);
}
