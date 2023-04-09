#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Description: This program prints the names of the arguments passed to it,
 * separated by spaces, followed by a new line.
 *
 * Return: Always returns 0 to indicate successful execution
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}

	printf("\n");

	return (0);
}
