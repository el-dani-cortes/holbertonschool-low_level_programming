#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: Pointer to a string.
 * @accept: Pointer to string to compare.
 *
 * Return: Pointer where it finds the first match.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for ( ; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
	}
	return ('\0');
}
