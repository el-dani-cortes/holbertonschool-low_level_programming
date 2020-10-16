#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - Function reallocates a memory block using malloc and free.
 * @ptr:  pointer to the memory previously allocated.
 * @old_size: size in bytes of the allocated space for ptr.
 * @new_size: new size in bytes of the new memory block
 *
 * Return: a void pointer to a new memory location.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != '\0')
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
	{
		return (NULL);
	}
	free(ptr);
	return (ptr2);
}
