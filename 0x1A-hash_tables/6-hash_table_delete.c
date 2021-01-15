#include "hash_tables.h"

/**
 * hash_table_delete - Function that delete a hash table
 * @ht: Pointer to the hash table created.
 *
 * Return: Always nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp = NULL;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			while (ht->array[i] != NULL)
			{
				tmp = ht->array[i];
				ht->array[i] = ht->array[i]->next;
				free(tmp->value);
				free(tmp->key);
				free(tmp);
			}
			/*free(ht->array[i]);*/
		}
		free(ht->array);
	}
	free(ht);
}
