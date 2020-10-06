#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints a chessboard.
 * @a: Pointer to array board.
 * @size: size of the array.
 *
 * Return: always void.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;

	i = 0;
	while  (i < size * size)
	{
		sum1 += a[i];
		i = i + size + 1;
	}
	i = size - 1;
	while  (i <= (size - 1) * size)
	{
		sum2 += a[i];
		i = i + size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
