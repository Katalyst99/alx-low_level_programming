#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data(n) of a dlistint_t linked list.
 * @head: The head of dlistint_t linked list.
 * Return: The sum of all the data (n) of dlistint_t,
 * if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head)
	{
		if (head == NULL)
		{
			return (0);
		}
		else
		{
			result += head->n;
			head = head->next;
		}
	}
	return (result);
}
