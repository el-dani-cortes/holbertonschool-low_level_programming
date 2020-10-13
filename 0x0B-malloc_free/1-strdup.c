#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Function returns a pointer to a newly allocated space in memory.
 * @str: string to copy.
 *
 * Return: pointer to the array. NULL is size is 0 or fails.
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *ptr;

	ptr = malloc(sizeof(char) * sizeof(str));
	if (str[0] == '\0' || ptr == NULL)
	{
		return ('\0');
	}
	else
	{
		for (i = 0; i <= sizeof(str); i++)
		{
			ptr[i] = str[i];
		}
		return (ptr);
	}
	return ('\0');
}
