#include "lists.h"

/**
 * sum_dlistint - sums all the data in a linked list
 * @head: the list
 *
 * Return: returns sum of all data in a list or 0 if it is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int size = 0;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		size += temp->n;
		temp = temp->next;
	}

	return (size);
}
