#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int bytes, i;
    char *arr;

    /* Check if the number of arguments is valid */
    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    /* Convert the input argument to an integer */
    bytes = atoi(argv[1]);

    /* Check if the input argument is valid */
    if (bytes < 0)
    {
        printf("Error\n");
        exit(2);
    }

    /* Assign the starting address of the main function to the char pointer */
    arr = (char *)main;

    /* Print the opcodes of the function */
    for (i = 0; i < bytes; i++)
    {
        /* Print the opcode as a hexadecimal number */
        if (i == bytes - 1)
        {
            printf("%02hhx\n", arr[i]);
            break;
        }
        printf("%02hhx ", arr[i]);
    }

    return (0);
}
