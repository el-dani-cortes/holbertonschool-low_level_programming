#ifndef SEARCH_H
#define SEARCH_H

#include <stdlib.h>
#include <stdio.h>


/*
 * Function that searches for a value in an
 * array of integers using the Linear search algorithm
 */
int linear_search(int *array, size_t size, int value);

/*
 * Function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 */
int binary_search(int *array, size_t size, int value);



#endif /* SEARCH_H */
