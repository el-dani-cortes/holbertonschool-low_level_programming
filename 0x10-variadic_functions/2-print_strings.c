#include "variadic_functions.h"

/**
 * print_strings - function that prints string
 * @separator: string to separate numbers
 * @n: numbers of arguments
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i;
	char *s = NULL;

	va_start(num_list, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			s = va_arg(num_list, char *);
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");
			if (i == n - 1)
			{
				printf("\n");
				break;
			}
			printf("%s", separator);
		}
		va_end(num_list);
	}
}
