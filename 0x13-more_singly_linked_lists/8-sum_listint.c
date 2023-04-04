#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t linked list
 * @head: The pointer to the listint_t list.
 * Return: The sum of all the data (n) of a listint_t,
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sumd = 0;

	while (head)
	{
		if (head == NULL)
		{
			return (0);
		}
		else
		{
			sumd += head->n;
			head = head->next;
		}
	}
	return (sumd);
}
