#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument values
 *
 * Return: Always 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int y1;
    int y2;
    int i;

    if (argc != 3)
    {
        printf("Error: Invalid number of arguments\n");
        return 1;
    }
    else
    {
        y1 = atoi(argv[1]);
        y2 = atoi(argv[2]);
        printf("%d\n", y1 * y2);
        return 0;
    }
}
