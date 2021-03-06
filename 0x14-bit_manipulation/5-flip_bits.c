#include "holberton.h"

/**
 * flip_bits - Function gives number of bits you need to flip between numbers.
 * @n: number 1 in decimal to compare.
 * @m: number 2 in decimal to compare.
 *
 * Return: the number of bits you would need to flip between numbers.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned long int count = 0;

	num = n ^ m;
	while (num > 0)
	{
		count += (1 & num);
		num >>= 1;
	}
	return (count);
}
