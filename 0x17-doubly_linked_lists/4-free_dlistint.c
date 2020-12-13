#include "lists.h"

/**
 * free_dlistint - Function that frees a double linked list.
 * @head: Head of the double linked list.
 *
 * Return: Always nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head->next)
	{
		tmp = head;
		head = head->next;
		head->prev = NULL;
		tmp->next = NULL;
		free(tmp);
	}
	free(head);
}
