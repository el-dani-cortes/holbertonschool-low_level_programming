#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number to binary, 0 if there a char in the string
 * and 0 when b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, count = 0;
	unsigned int num = 0,  sum = 0, base = 1;

	if (b)
	{
		while (b[i])
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
			i++;
			count++;
		}
		i--;
		count--;
		for (; i >= 0; i--)
		{
			num = b[i] - 48;
			if (i != count)
			{
				base = base * 2;
				sum = sum + (num * base);
			}
			else
				sum = sum + (num * 1);
		}
		return (sum);
	}
	return (0);
}
