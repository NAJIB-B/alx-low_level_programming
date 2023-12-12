#include "lists.h"

/**
 * sum_listint - returns the sum of all the integers in the list
 * @head: pointer to list
 *
 * Return: returns the sum or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *last_node;

	if (head == NULL)
		return (0);

	last_node = head;

	while (last_node->next != NULL)
	{
		sum += last_node->n;

		last_node = last_node->next;
	}

	sum += last_node->n;

	return (sum);
}
