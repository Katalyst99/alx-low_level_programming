#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: Pointer to head of list_t list
 * @str: The string to be added to list_t list
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *sd;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	sd = strdup(str);
	if (sd == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = sd;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
