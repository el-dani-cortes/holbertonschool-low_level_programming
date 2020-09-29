#include "holberton.h"

/**
 * puts2 - Prints a string.
 * @str: Variable string.
 *
 * Return: Always void.
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar(10);
}
