#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: Pointer to the hash table created.
 * @key: Key value or string to save.
 * @value: Value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	unsigned long int size = 0;
	hash_node_t *new_node = NULL;
	hash_node_t *tmp =  NULL;

	if (ht == NULL || key == NULL)
		return (0);
	size = ht->size;
	index = key_index((unsigned char *)key, size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->value == NULL)
		return (0);
	new_node->next =  ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
