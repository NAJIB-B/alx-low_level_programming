#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: pointer to pointer of list
 * @n: number to add
 *
 * Return: returns pointer to the list
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new;
	}
	else
	{
		temp = (*head);

		while ((temp->next) != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return ((*head));
}
