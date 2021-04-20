#include "search_algos.h"

/**
 * jump_search -  function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0;
	size_t b = 0, i = 0;

	if (array != NULL)
	{
		while (b < size && array[b] < value)
		{
			a = b;
			b = b + sqrt(size);
			printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       a, b);
		for (i = a; i <= b; i++)
		{
			printf("Value checked array[%lu] = [%d]\n",
			       i, array[i]);
			if (array[i] == value)
				return (i);
			if (b > size)
				break;
		}
	}
	return (-1);
}
