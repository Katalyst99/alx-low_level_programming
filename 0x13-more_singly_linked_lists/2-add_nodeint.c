#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: The pointer to the address of the head of listint_t list.
 * @n: The integer for the newly added node
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *beg;

	beg = malloc(sizeof(listint_t));
	if (beg == NULL)
	{
		return (NULL);
	}
	beg->n = n;
	beg->next = NULL;

	beg->next = *head;
	*head = beg;
	return (*head);
}
