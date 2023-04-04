#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 * the constant byte b
 *
 * @s: pointer to the memory area to be filled
 * @b: value to be set
 * @n: number of bytes to be set to the value
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    int i = 0;

    for (; n > 0; i++)
    {
        s[i] = b;  // set the i-th byte of s to b
        n--;      // decrement n
    }

    return (s);  // return a pointer to the memory area s
}
