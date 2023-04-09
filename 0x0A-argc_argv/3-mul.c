#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument values
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int y1, y2;

    if (argc != 3)
    {
        printf("Error\n");
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
