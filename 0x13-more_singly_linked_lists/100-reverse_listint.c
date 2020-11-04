#include "lists.h"

/**
 * reverse_listint - Function that reverses a linked list.
 * @head: pointer to pointer to the head of the linked list.
 *
 * Return: pointer to head.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre_node, *current_node, *next_node;

	current_node = *head;
	next_node = *head;
	pre_node = NULL;
	while (current_node)
	{
		next_node = next_node->next;
		current_node->next = pre_node;
		pre_node = current_node;
		current_node = next_node;
	}
	*head = pre_node;
	return (*head);
}
