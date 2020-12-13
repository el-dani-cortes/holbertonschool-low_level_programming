#include "lists.h"

/**
 * get_dnodeint_at_index - Function returns nth node of double linked list.
 * @head: Head of the double linked list.
 * @index: Index of the node, starting from 0.
 *
 * Return: address of nth node of double linked list. NULL if does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int n = 1;

	if (head)
	{
		tmp = head;
		if (index == 0)
			return (tmp);
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
			if (n == index)
				return (tmp);
			n++;
		}
	}
	return (NULL);
}
