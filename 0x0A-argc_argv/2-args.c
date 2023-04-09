#include <stdio.h>

/**
 * main - Entry point of the program that prints all arguments it receives.
 * @argc: Argument count - the number of command-line arguments
 * @argv: Argument values - an array of strings containing the arguments
 *
 * Return: 0 indicating successful execution
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
