#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - function to create a array an initialize with a char.
 * @size: size of the array.
 * @c: Initialize char for the array.
 *
 * Return: pointer to the array. NULL is size is 0 or fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		ptr = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
	return ('\0');
}
