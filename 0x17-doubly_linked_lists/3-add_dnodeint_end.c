#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a node at the end.
 * @head: Head of the double linked list.
 * @n: Data to save in the node.
 *
 * Return: Return address of the new node or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *tmp = NULL;

	tmp = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		new_node->prev = tmp;
		new_node->next = NULL;
		tmp->next = new_node;
	}
	return (new_node);
}
