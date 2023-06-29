#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: The pointer to the address of the head of listint_t list.
 * @str: The string to be added to the list
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	unsigned int c = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);

	while (str[c])
	{
		c++;
	}
	newnode->len = c;
	newnode->next = 0;
	temp = *head;

	if (temp == 0)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != 0)
		{
			temp = temp->next;
		}
			temp->next = newnode;
	}
	return (*head);
}
