#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert a node in a given position.
 * @head: pointer to pointer to the head of the linked list.
 * @idx: index of the list where the new node should be added.
 * @n: integer to add to the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp_node;
	unsigned int i = 1;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	tmp_node = *head;
	while (i < idx)
	{
		tmp_node = tmp_node->next;
		i++;
		if (tmp_node == NULL)
			return (NULL);
	}
	new_node->next = tmp_node->next;
	tmp_node->next = new_node;
	return (new_node);
}
