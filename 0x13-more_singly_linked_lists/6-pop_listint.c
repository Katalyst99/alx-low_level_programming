#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: The pointer to the address of the head of listint_t linked list
 * Return: The head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		*head = (*head)->next;
		data = (*head)->n;
		free(temp);
		temp = NULL;
	}
	return (data);
}
