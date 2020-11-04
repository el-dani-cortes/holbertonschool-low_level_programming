#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: head of the linked list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int num_node = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			num_node++;
		}
		return (num_node);
	}
	printf("(nil)");
	return (0);
}
