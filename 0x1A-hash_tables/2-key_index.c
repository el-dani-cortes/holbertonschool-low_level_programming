#include "hash_tables.h"

/**
 * key_index - Function to get the index.
 *
 * @key: Key value or pre hash value.
 * @size: Size of the hash table, total number of index.
 *
 * Return: Index number for the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
