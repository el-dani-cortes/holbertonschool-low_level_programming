#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>

/*Function to print a character*/
int _putchar(char c);

/*Function that prints a name*/
void print_name(char *name, void (*f)(char *));

/*Function executes a function given as parameter on each element of array*/
void array_iterator(int *array, size_t size, void (*action)(int));

/*Function that searches for an integer*/
int int_index(int *array, int size, int (*cmp)(int));


#endif /* FUNCTION_POINTERS */
