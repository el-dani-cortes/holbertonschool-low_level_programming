#include "holberton.h"

/**
 * *_strchr - Function that locates a character in a string.
 * @s: Pointer to a string.
 * @c: Character to locate in the string.
 *
 * Return: Pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
