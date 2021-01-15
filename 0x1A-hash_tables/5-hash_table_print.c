#include "hash_tables.h"

/**
 * hash_table_print - Function to print all values of the hash table.
 * @ht: Pointer to the hash table created.
 *
 * Return: Always nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i = 0;
	int coma = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] == NULL)
		{
			i++;
			continue;
		}
		if (coma == 1)
			printf(", ");
		coma = 1;
		temp = ht->array[i];
		while (temp)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			if (temp->next != NULL)
				printf(", ");
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}
