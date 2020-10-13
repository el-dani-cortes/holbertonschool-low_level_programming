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
	unsigned int j;
	char *ptr;

	ptr = malloc(sizeof(char) * (i + 1));
	if (str[0] == '\0' || ptr == NULL)
	{
		return ('\0');
	}
	else
	{
		while (str[i] != '\0')
		{
			i++;
		}
		for (j = 0; j < (i + 1); j++)
		{
			ptr[j] = str[j];
		}
		return (ptr);
	}
	return ('\0');
}
