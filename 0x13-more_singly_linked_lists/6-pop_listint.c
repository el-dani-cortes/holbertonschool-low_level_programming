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

	tmp_node = *head;
	if (!tmp_node)
		return (0);
	*head = tmp_node->next;
	tmp_node->next = NULL;
	n = tmp_node->n;
	free(tmp_node);
	return (n);
}
