#ifndef __FILE_H_
#define __FILE_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/*function to perform the operation asked by the user*/
int (*get_op_func(char *s))(int, int);

/*Returns the sum of a and b*/
int op_add(int a, int b);

/*Returns the difference of a and b*/
int op_sub(int a, int b);

/*Returns the product of a and b*/
int op_mul(int a, int b);

/*Returns the result of the division of a by b*/
int op_div(int a, int b);

/*Returns the remainder of the division of a by b*/
int op_mod(int a, int b);

#endif /*FILE_H*/
