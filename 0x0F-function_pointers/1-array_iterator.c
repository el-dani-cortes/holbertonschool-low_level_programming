#include "function_pointers.h"

/**
 * array_iterator - executes function given parameter on each element of array.
 * @array: array with elements to iterate.
 * @size: size of the the array.
 * @action: pointer to the function you need to use.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size != NULL && action != NULL)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
