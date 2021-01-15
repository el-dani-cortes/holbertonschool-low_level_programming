#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: Pointer to the hash table created.
 * @key: Key value or string to save.
 *
 *
 * Return: Value associated with the element, or NULL if key couldnt be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	unsigned long int size = 0;
	hash_node_t *tmp = NULL;

	size =  ht->size;
	index = key_index((unsigned char *)key, size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}
	return (NULL);
}
