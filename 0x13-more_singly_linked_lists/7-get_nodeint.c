#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of linked list.
 * @head: head of linked list.
 * @index: index of the node.
 *
 * Return: pointer to the node, according to index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head)
	{
		while (head)
		{
			if (i == index)
			{
				if (head)
					return (head);
				else
					return (NULL);
			}
			head = head->next;
			i++;
		}
	}
	return (NULL);
}
