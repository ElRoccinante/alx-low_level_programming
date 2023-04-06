#include "main.h"

/**
 * _strlen_recursion - A function that calculates the length of a string recursively.
 * @s: A pointer to the input string
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
    if (*s)
        return (1 + _strlen_recursion(s + 1));
    return (0);
}
