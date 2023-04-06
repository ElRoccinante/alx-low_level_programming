#include "main.h"

/**
 * _strlen_recursion - Calculate length of a string recursively.
 * @s: Pointer to the input string
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
    if (*s) // If current character is not null terminator
        return (1 + _strlen_recursion(s + 1)); // Add 1 to result of recursive call
    return (0); // Return 0 when null terminator is reached
}
