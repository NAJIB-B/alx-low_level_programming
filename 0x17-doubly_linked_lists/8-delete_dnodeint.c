#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete node at an index of a doubly linked list
 * @head: the list
 * @index: the index to delete element in
 *
 * Return: the address of the new node, or NULL if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev_head, *next_node;
	unsigned int i = 0;

	if (head == NULL || (*head) == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head);
		(*head) = (*head)->next;
		if ((*head) != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	temp = (*head);

	while (i < index)
	{
		if (temp == NULL)
			return (-1);
		prev_head = temp;
		temp = temp->next;
		++i;
	}
	next_node = temp->next;
	if (next_node != NULL)
	{
		prev_head->next = next_node;
		next_node->prev = prev_head;
		free(temp);
		return (1);
	}
	else
	{
		prev_head->next = NULL;
		free(temp);
		return (1);
	}
}
