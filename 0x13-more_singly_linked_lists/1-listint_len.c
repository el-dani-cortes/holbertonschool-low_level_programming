#include "lists.h"

/**
 * listint_len - function that returns the number of elements in linked list.
 * @h: Head of the linked list.
 *
 * Return: number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int num_node = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			h = h->next;
			num_node++;
		}
		return (num_node);
	}
	return (0);
}
