#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table
 * @key: The key, can not be an empty string
 * @value: The value associated with the key, must be
 * duplicated and can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hnode;
	unsigned long int i, hash;
	char *value_dup;

	if (!ht || !key || *key == '\0' || value == NULL)
		return (0);

	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);

	hash = key_index((const unsigned char *)key, ht->size);
	i = hash;
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_dup;
			return (1);
		}
		i++;
	}

	new_hnode = malloc(sizeof(hash_node_t));
	if (new_hnode == NULL)
	{
		free(value_dup);
		return (0);
	}
	new_hnode->key = strdup(key);
	if (new_hnode->key == NULL)
	{
		free(new_hnode);
		return (0);
	}
	new_hnode->value = value_dup;
	new_hnode->next = ht->array[hash];
	ht->array[hash] = new_hnode;
	return (1);
}
