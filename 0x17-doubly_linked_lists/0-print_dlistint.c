#include "lists.h"

/**
 * print_dlistint - Prints a doble linked list.
 * @h: Head of the double linked list.
 *
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = NULL;
	int n = 0;

	tmp = h;
	if (h)
	{
		while (tmp)
		{
			printf("%d\n", tmp->n);
			tmp = tmp->next;
			n++;
		}
		return (n);
	}
	return (0);
}
