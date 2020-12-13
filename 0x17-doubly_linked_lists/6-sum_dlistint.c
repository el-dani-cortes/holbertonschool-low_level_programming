#include "lists.h"

/**
 * sum_dlistint - Function returns sum of all the data of a double linked list.
 * @head: Head of the double linked list.
 *
 * Return: The sum of all the data (n).
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;
	int sum = 0;

	tmp = head;
	if (head != NULL)
	{
		while (tmp)
		{
			sum += tmp->n;
			tmp = tmp->next;
		}
		return (sum);
	}
	return (0);
}
