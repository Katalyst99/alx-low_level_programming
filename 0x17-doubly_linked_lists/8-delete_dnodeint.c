#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at index index of a dlistint_t,
 * linked list.
 * @head: Pointer to the head of dlistint_t linked list
 * @index: The index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
	{
		return (-1);
	}

	if (tmp->prev)
	{
		tmp->prev->next = tmp->next;
	}
	else
	{
		*head = tmp->next;
	}

	if (tmp->next)
	{
		tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
