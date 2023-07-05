#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: The pointer to the address of the head of listint_t list
 * @n: The integer for the newly added end node.
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	end = *head;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		while (end->next != 0)
		{
			end = end->next;
		}
		end->next = temp;
	}
	return (*head);
}
