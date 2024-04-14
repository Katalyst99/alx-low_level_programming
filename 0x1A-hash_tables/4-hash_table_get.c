#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: The hash table
 * @key: The key
 * Return: The associated value, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hnode;
	unsigned long int hash;

	if (!ht || !key || *key == '\0')
		return (NULL);

	hash = key_index((const unsigned char *)key, ht->size);
	hnode = ht->array[hash];
	if (hnode == NULL)
		return (NULL);
	while (hnode)
	{
		if (strcmp(hnode->key, key) == 0)
		{
			return (hnode->value);
		}
		hnode = hnode->next;
	}
	return (NULL);
}
