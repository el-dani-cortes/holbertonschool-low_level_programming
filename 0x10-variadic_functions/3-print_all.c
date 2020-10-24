#include "variadic_functions.h"

/**
 * printf_char - Print a char.
 * @a: Argument to print.
 *
 * Return: Nothing.
 */
void printf_char(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * printf_int - Print a int.
 * @a: Argument to print.
 *
 * Return: Nothing.
 */
void printf_int(va_list a)
{
	printf("%d", va_arg(a, int));
}

/**
 * printf_float - Print a float.
 * @a: Argument to print.
 *
 * Return: Nothing.
 */
void printf_float(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
 * printf_string - Print a string.
 * @a: Argument to print.
 *
 * Return: Nothing.
 */
void printf_string(va_list a)
{
	char *s;

	s = va_arg(a, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - Print anything.
 * @format: string with the types to print
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list p_list;
	format_t p_type[] = {
		{'c', printf_char},
		{'i', printf_int},
		{'f', printf_float},
		{'s', printf_string},
		{'\0', '\0'}
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *s = "";

	va_start(p_list, format);
	while (format != NULL && format[i] != '\0')
	{
		while (p_type[j].type != '\0')
		{
			if (format[i] == p_type[j].type)
			{
				printf("%s", s);
				p_type[j].f(p_list);
				s = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(p_list);
}
