#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: The pointer to the address of the head of listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
