#include "holberton.h"

/**
 * print_chessboard - Function that prints a chessboard.
 * @a: Pointer to array board.
 *
 * Return: always void.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}

}
