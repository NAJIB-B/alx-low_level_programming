#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to pointer of the list
 *
 * Return: returns pointer to the head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last_head, *temp;

	if (head == NULL)
		return (NULL);

	if ((*head) == NULL)
		return (NULL);

	last_head = (*head);

	temp = (*head)->next;

	(*head)->next = NULL;

	(*head) = temp;

	while ((*head)->next != NULL)
	{
		temp = (*head)->next;

		(*head)->next = last_head;

		last_head = (*head);

		(*head) = temp;
	}

	(*head)->next = last_head;

	return ((*head));
}
