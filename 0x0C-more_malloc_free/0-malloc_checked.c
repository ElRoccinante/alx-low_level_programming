#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory.
 * If malloc fails, the function will print an error message and terminate
 * the program with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
    void *p = malloc(b);  /* Use void pointer for generalization */

    if (p == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");  /* Print error message */
        exit(98);  /* Terminate program with status value 98 */
    }

    return p;
