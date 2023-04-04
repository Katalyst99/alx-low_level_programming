#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: The pointer to the listint_t list
 * @index: The index of the node
 * Return: The nth node of a listint_t linked list,
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int node = 0;

	while (temp && node < index)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
		node++;
	}
	return (temp);
}
