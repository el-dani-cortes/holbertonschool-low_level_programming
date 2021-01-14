#include "hash_tables.h"
/**
 * hash_table_create - function that returns a hash table pointer
 * @size: Size of the array that contains the hash.
 *
 * Return: Pointer to the hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table = NULL;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);
	else
	{
		h_table->size = size;
		h_table->array = malloc(sizeof(hash_node_t*) * h_table->size);
		if (h_table->array == NULL)
			return (NULL);
	}
	return (h_table);
}
