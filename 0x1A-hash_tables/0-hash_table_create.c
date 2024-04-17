#include "hash_tables.h"
#include <stdlib.h> /*Included for malloc and calloc*/
/**
 * hash_table_create - Create a hash table.
 *
 * @size: Size of the hash table.
 *
 * Return: Pointer to the newly created hash table, or NULL if it fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* Allocate memory for the hash table structure */
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	/* Set the size of the hash table */
	table->size = size;

	/* Memory for the array of hash node pointers and initialize to NULL */
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	/* Return the created hash table */
	return (table);
}
