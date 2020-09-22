#include "holberton.h"

/**
 * jack_bauer - Count hours and minutes until 24h.
 *
 * Return: Return always void.
 */
void jack_bauer(void)
{
	int m1;
	int h1;
	int m2;
	int h2;

	for (h1 = 48 ; h1 <= 50 ; h1++)
	{
		for (h2 = 48 ; h2 <= 52 ; h2++)
		{
			for (m1 = 48 ; m1 <= 53 ; m1++)
			{
				for (m2 = 48 ; m2 <= 57 ; m2++)
				{
					_putchar (h1);
					_putchar (h2);
					_putchar (':');
					_putchar (m1);
					_putchar (m2);
					_putchar ('\n');
				}
			}
		}
	}
}
