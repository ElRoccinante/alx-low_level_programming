#include "main.h"

/**
 * _strlen - the function returns the length of a string
 * @s: string to be checked
 * Return: length of the string
 */

int _strlen(char *s)
{
        int longi = 0;

        while (*s != '\0')
        {
                longi++;
                s++;
        }

        return (longi);
}
