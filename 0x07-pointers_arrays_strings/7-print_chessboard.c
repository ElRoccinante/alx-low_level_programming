#include "main.h"

/**
 * print_chessboard - This function takes in a 2D array and prints.
 * @a: The 2D array to be printed.
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
