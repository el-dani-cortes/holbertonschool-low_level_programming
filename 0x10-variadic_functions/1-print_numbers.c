#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to separate numbers
 * @n: numbers of arguments
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i;

	va_start(num_list, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (va_arg(num_list,int != NULL))
			{
				printf("%d", va_arg(num_list, int));
				if (i == n - 1)
				{
					printf("\n");
					break;
				}
				printf("%s", separator);
			}
			else
				printf("(nil)");
		}
		else
			printf("(nil)");
	}
	va_end(num_list);
}
