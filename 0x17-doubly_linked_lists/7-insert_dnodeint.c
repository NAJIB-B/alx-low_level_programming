#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert node at an index of a doubly linked list
 * @h: the list
 * @idx: the index to insert element in
 * @n: the value of the new element to insert
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *prev_head, *new;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->next = NULL;
	new->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	temp = *h;

	while (i < idx)
	{
		if (temp == NULL)
			return (NULL);
		prev_head = temp;
		temp = temp->next;
		++i;
	}
	prev_head->next = new;
	new->prev = prev_head;
	new->next = temp;

	if (temp != NULL)
		temp->prev = new;

	return (new);

}
