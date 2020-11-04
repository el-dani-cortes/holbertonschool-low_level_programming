#include "lists.h"

/**
 * free_listint - function that frees a linked list.
 * @head: head of linked list.
 *
 * Return: always nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp_node;

	if (head != NULL)
	{
		while (head != NULL)
		{
			tmp_node = head;
			head = head->next;
			free(tmp_node);
		}
	}
}
