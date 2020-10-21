#include "function_pointers.h"

/**
 * int_index - executes function given parameter on each element of array.
 * @array: array with elements to search.
 * @size: size of the array.
 * @cmp: pointer to the function you need to use.
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j = 0;
	int compare_value;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		compare_value = (*cmp)(array[i]);
		if (compare_value != 0)
		{
			j++;
			break;
		}
	}
	if (j == 0)
		return (-1);
	return (i);
}
