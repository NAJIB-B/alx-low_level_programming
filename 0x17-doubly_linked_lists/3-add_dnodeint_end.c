#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds node at the end of a doubly linked list
 * @head: the list to add the node to
 * @n: the value to add to the new node
 *
 * Return: returns the address of the new node or NULL if any error occurs
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->prev = NULL;
	new->n = n;

	if ((*head) == NULL)
	{
		(*head) = new;
	}
	else
	{
		temp = (*head);

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = new;
		new->prev = temp;
	}

	return (new);
}
