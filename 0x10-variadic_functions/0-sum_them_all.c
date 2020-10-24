#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: numbers of parameters to sum.
 *
 * Return: Result of the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num_list;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(num_list, n);

	for (i = 0; i < n; i++)
		sum  += va_arg(num_list, int);
	va_end(num_list);
	return (sum);
}
