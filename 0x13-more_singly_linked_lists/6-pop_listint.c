#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of linked list.
 * @head: head of linked list.
 *
 * Return: data inside the node deleded.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp_node;
	int n;

	if (!*head)
		return (0);
	tmp_node = *head;
	*head = tmp_node->next;
	n = tmp_node->n;
	free(tmp_node);
	return (n);
}
