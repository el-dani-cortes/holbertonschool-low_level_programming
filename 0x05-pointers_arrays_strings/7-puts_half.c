#include "holberton.h"

/**
 * puts_half - Prints a string.
 * @str: Variable string.
 *
 * Return: Always void.
 */
void puts_half(char *str)
{
	int len, i;
	char ch, *count;

	len = 0;
	count = str;
	while (*count != '\0')
	{
		count++;
		len++;
	}
	for (i = (len - 1) / 2 ; i < len ; i++)
	{
		ch = *(str + i);
		_putchar(ch);
	}
	_putchar(10);
}
