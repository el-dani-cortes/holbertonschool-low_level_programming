#include "lists.h"

/**
 * dlistint_len - Returns number of elements in a double linked list.
 * @h: Head of the double linked list.
 *
 *
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = NULL;
	int n = 0;

	tmp = h;
	if (h)
	{
		while (tmp)
		{
			tmp = tmp->next;
			n++;
		}
		return (n);
	}
	return (0);
}
