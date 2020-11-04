#include "lists.h"

/**
 * add_nodeint_end - function adds a new node at the end of linked list.
 * @head: pointer to the head of linked list.
 * @n: integer to add to the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	last_node = *head;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next =  new_node;
	}
	return (*head);
}
