#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number in decimal base to convert.
 * @index: index of the bit you want to get.
 *
 * Return: value of the bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index < sizeof(n) * 8)
	{
		for (i = 0; i < index; i++)
			n = n >> 1;
		if (n & 1)
			return (1);
		else
			return (0);
	}
	return (-1);
}
