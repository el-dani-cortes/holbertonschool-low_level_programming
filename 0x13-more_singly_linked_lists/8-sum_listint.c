#include "lists.h"

/**
 * sum_listint - function returns the sum of all the data (n) of linked list.
 * @head: head of linked list.
 *
 * Return: sum of data inside every node.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum = sum + head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
