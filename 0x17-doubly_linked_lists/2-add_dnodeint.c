#include "lists.h"

/**
 * add_dnodeint - Add a node at the end of double linked list.
 * @head: Head of the double linked list.
 * @n: Data to save in the node.
 *
 * Return: Return address of the new node or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	else
	{
		(*head)->prev = new_node;
		new_node->next = *head;
		new_node->prev = NULL;
	}
	*head = new_node;
	return (*head);
}
