#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list.
 * @h: head of the linked list.
 *
 * Return: number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	unsigned int n;

	if (h != NULL)
	{
		while (h != NULL)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			h = h->next;
			n++;
		}
		return (n);
	}
	return (0);
}
