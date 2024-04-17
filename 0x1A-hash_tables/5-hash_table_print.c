#include "hash_tables.h"
/**
 * hash_table_print -  prints a hash table.
 * @ht: The hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hnode;
	int flag = 0;
	unsigned long int i;

	if (ht == NULL)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		hnode = ht->array[i];
		while (hnode != NULL)
		{
			if (flag != 0)
				printf(", ");
			printf("'%s': '%s'", hnode->key, hnode->value);
			hnode = hnode->next;
			flag++;
		}
	}
	putchar('}');
	putchar('\n');
}
