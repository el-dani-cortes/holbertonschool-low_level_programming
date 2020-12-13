#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes the node at index of a
 * double linked list.
 * @head: Head of the double linked list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int position = 0;

	if (*head && head)
	{
		tmp = *head;
		if (index == 0)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(tmp);
		}
		else
		{
			while (position < index)
			{
				tmp = tmp->next;
				if (tmp == NULL)
					return (-1);
				position++;
			}
			tmp->prev->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			free(tmp);
		}
		return (1);
	}
	return (-1);
}
