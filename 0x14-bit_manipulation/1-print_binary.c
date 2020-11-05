#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number in decimal base to convert.
 *
 * Return: always 0.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
	{
		_putchar('1');
		return;
	}
	else
	{
		_putchar('0');
		return;
	}
}
