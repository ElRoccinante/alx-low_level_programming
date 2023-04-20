#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - Prints the result of simple operations.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
    int num1, num2;
    char *op;

    // Check if the correct number of arguments were supplied.
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    // Convert the first and third arguments to integers.
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    // Get the operator from the second argument.
    op = argv[2];

    // Check if the operator is valid.
    if (get_op_func(op) == NULL || op[1] != '\0')
    {
        printf("Error\n");
        exit(99);
    }

    // Check if the division or modulo by zero is attempted.
    if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
    {
        printf("Error\n");
        exit(100);
    }

    // Call the function that corresponds to the operator and print the result.
    printf("%d\n", get_op_func(op)(num1, num2));

    return (0);
}
