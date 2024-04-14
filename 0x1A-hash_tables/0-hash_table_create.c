#include "hash_tables.h"

/**
 * *hash_table_create - Creates a hash table.
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table,
 * if an error occurs return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *htable;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
	{
		return (NULL);
	}
	htable->size = size;
	htable->array = malloc(sizeof(hash_node_t *) * size);
	if (htable->array)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		htable->array[i] = NULL;
	return (htable);
}
