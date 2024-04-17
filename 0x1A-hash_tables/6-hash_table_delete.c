#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: The hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hnode, *h;
	unsigned long int i;

	if (ht == NULL)
		return;

	i = 0;
	while (i < ht->size)
	{
		hnode = ht->array[i];
		while (hnode)
		{
			h = hnode->next;
			free(hnode->key);
			free(hnode->value);
			free(hnode);
			hnode = h;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
