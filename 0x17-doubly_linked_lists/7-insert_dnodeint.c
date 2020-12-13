#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts new node at given position.
 * @h: Head of the double linked list.
 * @idx: Index of the list where the new node should be added.
 * @n: Data value to insert in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *behind = NULL, *advance = NULL, *new_node = NULL;
	unsigned int position = 1;

	if (*h && h)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);
		new_node->n = n;
		advance = (*h)->next;
		behind = *h;
		if (idx == 0)
		{
			new_node->prev = NULL;
			new_node->next = behind;
			behind->prev = new_node;
			*h = new_node;
			return (*h);
		}
		while (advance != NULL)
		{
			if (position == idx)
			{
				new_node->prev = behind;
				new_node->next = advance;
				behind->next = new_node;
				advance->prev = new_node;
				return (new_node);
			}
			advance = advance->next;
			behind = behind->next;
			position++;
		}
	}
	return (NULL);
}
