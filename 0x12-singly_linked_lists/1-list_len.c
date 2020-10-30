#include "lists.h"

/**
 * list_len - function that returns the number of elements in linked list.
 * @h: Head of the linked list.
 *
 * Return: number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	unsigned int n;

	if (h != NULL)
	{
		while (h != NULL)
		{
			h = h->next;
			n++;
		}
		return (n);
	}
	return (0);
}
