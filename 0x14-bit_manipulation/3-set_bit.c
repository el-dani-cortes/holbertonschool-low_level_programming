#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: number in decimal base to convert.
 * @index: index of the bit you want to set to 1.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(*n) * 8)
	{
		*n = *n | 1 << index;
		return (1);
	}
	return (-1);
}
