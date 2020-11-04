#ifndef __FILE_H_
#define __FILE_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


/*Function that prints all the elements of a linked list*/
size_t print_listint(const listint_t *h);

/*Function that returns the number of elements in a linked list*/
size_t listint_len(const listint_t *h);

/*Function that adds a new node at the beginning of a linked list*/
listint_t *add_nodeint(listint_t **head, const int n);

/*Function that adds a new node at the end of a linked list*/
listint_t *add_nodeint_end(listint_t **head, const int n);

/*Function that frees a linked list*/
void free_listint(listint_t *head);

/*Function that frees a linked list*/
void free_listint2(listint_t **head);

/*Function that deletes the head node of a linked list*/
/*Returns the head nodes data (n)*/
int pop_listint(listint_t **head);

/*Function that returns the nth node of a linked list*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/*Function that returns the sum of all the data (n) of a linked list*/
int sum_listint(listint_t *head);

/*Function that inserts a new node at a given position*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/*Function that deletes the node at index index of a linked list.*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/*Function that reverses a linked list.*/
listint_t *reverse_listint(listint_t **head);


#endif /*FILE_H*/
