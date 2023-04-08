#include "main.h"
#include <stdio.h>

/* Fonction _strchr pour localiser un caractère dans une chaîne */
char *_strchr(char *s, char c)
{
    while (*s)
    {
        if (c == *s)
            return (s);
        s++;
    }
    if (c == *s)
        return (s);
    return (NULL);
}
