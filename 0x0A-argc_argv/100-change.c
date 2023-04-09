#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function calculates the minimum number of coins needed
 *        to represent a given amount of cents.
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if the program runs successfully, 1 otherwise
 */
int main(int argc, char **argv)
{
    int cents, coins = 0;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    cents = atoi(argv[1]);

    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }

    while (cents > 0)
    {
        if (cents >= 25)
            cents -= 25;
        else if (cents >= 10)
            cents -= 10;
        else if (cents >= 5)
            cents -= 5;
        else if (cents >= 2)
            cents -= 2;
        else
            cents -= 1;

        coins++;
    }

    printf("%d\n", coins);

    return 0;
}
