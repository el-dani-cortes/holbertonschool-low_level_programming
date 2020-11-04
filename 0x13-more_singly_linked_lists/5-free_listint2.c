#include "lists.h"

/**
 * free_listint2 - function that frees a linked list and set head to NULL.
 * @head: pointer to pointer to head of linked list.
 *
 * Return: always nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp_node;

	if (*head != NULL)
	{
		while (*head != NULL)
		{
			tmp_node = *head;
			*head = tmp_node->next;
			free(tmp_node);
		}
		*head = NULL;
	}
}
