#include "lists.h"

/**
 * delete_nodeint_at_index - Function deletes the node at index of linked list.
 * @head: Pointer to pointer to head of linked list.
 * @index: index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp_node, *prev_node;
	unsigned int i = 1;

	if (!*head)
		return (-1);
	prev_node = *head;
	if (index == 0)
	{
		if (prev_node)
		{
			*head = (*head)->next;
			free(prev_node);
			return (1);
		}
		else
			return (-1);
	}
	while (i <= index - 1)
	{
		prev_node = prev_node->next;
		i++;
		if (!prev_node)
			return (-1);
	}
	tmp_node = prev_node->next;
	prev_node->next = tmp_node->next;
	free(tmp_node);
	return (1);
}
