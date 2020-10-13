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
	unsigned int j = 0;
	unsigned int i;
	char *ptr;

	while (str[j] != '\0')
	{
		j++;
	}
	if (str == '\0')
	{
		return ('\0');
	}
	ptr = malloc(sizeof(char) * (j + 1));
	if (ptr != NULL)
	{
		for (i = 0; i <= j; i++)
		{
			ptr[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}
