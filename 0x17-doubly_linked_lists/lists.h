#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/*Function to print a double linked list*/
size_t print_dlistint(const dlistint_t *h);

/*Function that returns the number of elements in a double linked list*/
size_t dlistint_len(const dlistint_t *h);

/*Function that adds a new node at the beginning of a doble linked list*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/*Function that adds a new node at the end of a double linked list*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/*Function that frees a double linked list*/
void free_dlistint(dlistint_t *head);

/*Function that returns the nth node of a double linked list*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/*Function that returns sum of all the data (n) of a double linked list*/
int sum_dlistint(dlistint_t *head);

/*Function that inserts a new node at a given position*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/*Function that deletes the node at index of a double linked list*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* LISTS_H */
