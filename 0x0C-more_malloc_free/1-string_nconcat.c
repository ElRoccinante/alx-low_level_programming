#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 * @n: Number of bytes from s2 to concatenate.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int x, y, z;
    char *s;

    /* Check for NULL pointers */
    if (s1 == NULL)
        x = 0;
    else
        for (x = 0; s1[x]; ++x)
            ;

    if (s2 == NULL)
        y = 0;
    else
        for (y = 0; s2[y]; ++y)
            ;

    /* Limit y to n bytes */
    if (y > n)
        y = n;

    /* Allocate memory for the concatenated string */
    s = malloc(sizeof(char) * (x + y + 1));
    if (s == NULL)
        return (NULL);

    /* Copy characters from s1 to s */
    for (z = 0; z < x; z++)
        s[z] = s1[z];

    /* Copy characters from s2 to s after s1 */
    for (z = 0; z < y; z++)
        s[z + x] = s2[z];

    /* Null-terminate the concatenated string */
    s[x + y] = '\0';

    return (s);
}
