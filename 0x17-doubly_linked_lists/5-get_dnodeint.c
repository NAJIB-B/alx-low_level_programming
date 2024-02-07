#include "lists.h"

/**
 * get_dnodeint_at_index - get's node at an index of a doubly linked list
 * @head: the list
 * @index: the index to get
 *
 * Return: return the node at the index or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	unsigned int i = 0;

	temp = head;

	while (i < index)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
		++i;
	}

	return (temp);
}
