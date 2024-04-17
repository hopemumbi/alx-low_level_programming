#include "hash_tables.h"
/**
 * key_index - Computes the index for a given key in a hash table array.
 *
 * @key: The key for which the index is computed.
 * @size: The size of the hash table array.
 *
 * Return: The index in the hash table array where the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Declare variables for hash value and index */
	unsigned long hash_value, index;

	/* Compute the hash value for the given key */
	hash_value = hash_djb2((const unsigned char *)key);
	/* Compute the index by taking the hash value modulo the size */
	index = hash_value % size;
	/* Return the computed index */
	return (index);
}
