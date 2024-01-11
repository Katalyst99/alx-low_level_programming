#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: The head of the dlistint_t list
 * @n: The data to be contained in the new node
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node_b;

	node_b = malloc(sizeof(dlistint_t));
	if (node_b == NULL)
	{
		return (NULL);
	}

	node_b->n = n;
	node_b->prev = NULL;
	node_b->next = *head;

	if (*head)
	{
		(*head)->prev = node_b;
	}

	*head = node_b;
	return (node_b);
}
