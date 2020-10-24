#ifndef __FILE_H_
#define __FILE_H_

#include <stdarg.h>
#include <stdio.h>

/*Function that returns the sum of all its parameters*/
int sum_them_all(const unsigned int n, ...);

/*Function that prints numbers*/
void print_numbers(const char *separator, const unsigned int n, ...);

/*Function that prints a string*/
void print_strings(const char *separator, const unsigned int n, ...);

/*Function that prints anything*/
void print_all(const char * const format, ...);

/**
 * struct format_s - Struct type for type and function asociated
 *
 * @type: type to evaluate
 * @f: The function associated
 */
typedef struct format_s
{
	char type;
	void (*f)();
} format_t;


void printf_char(va_list a);
void printf_int(va_list a);
void printf_float(va_list a);
void printf_string(va_list a);

#endif /*FILE_H*/
