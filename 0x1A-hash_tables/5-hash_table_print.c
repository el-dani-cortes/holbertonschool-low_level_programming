#include "hash_tables.h"

/**
 * hash_table_print - Function to print all values of the hash table.
 * @ht: Pointer to the hash table created.
 *
 * Return: Always nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size = 0;
	hash_node_t *tmp = NULL;
	unsigned long int i = 0, sw = 0;

	size =  ht->size;
	if (ht ==  NULL)
		return;
	printf("{");
	for (i = 0; i < size; i++)
	{
		tmp = ht->array[i];
		if (tmp == NULL)
			continue;
		if (sw == 1)
			printf(", ");
		sw  = 1;
		while (tmp)
		{
			if (tmp->next == NULL)
				printf("'%s': '%s'", tmp->key, tmp->value);
			else
				printf("'%s': '%s', ", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
