#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: The pointer to the address of the head of listint_t linked list
 * @idx: The index of the list where the new node should be added
 * @n: The integer to be added to new node
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_n, *temp = *head;
	unsigned int i;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
	{
		return (NULL);
	}
	new_n->n = n;

	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}

	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}
	else
	{
		new_n->next = temp->next;
		temp->next = new_n;
	}
	return (new_n);


}
