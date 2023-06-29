#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: The pointer to the address of the head of listint_t list.
 * @str: The string to be added to the list
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int c = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);

	while (str[c] != '\0')
	{
		c++;
	}
	newnode->len = c;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
