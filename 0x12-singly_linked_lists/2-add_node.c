#include "lists.h"

/**
 * add_node - function adds a new node at the beginning of a linked list.
 * @head: pointer to the head of the linked list.
 * @str: string to copy.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new_node;

	for (i = 0; str[i] != '\0'; i++)
		continue;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
