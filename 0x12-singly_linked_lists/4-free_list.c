#include "lists.h"

/**
 * free_list - function that frees a linked list.
 * @head: head of linked list.
 *
 * Return: always nothing.
 */
void free_list(list_t *head)
{
	list_t *tmp_node;

	while (head != NULL)
	{
		tmp_node = head;
		head = head->next;
		free(tmp_node->str);
		free(tmp_node);
	}
}
