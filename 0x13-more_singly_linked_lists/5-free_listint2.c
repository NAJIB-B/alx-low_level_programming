#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list and set the head to null
 * @head: pointer to pointer of the list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *last_node;

	if (head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		last_node = (*head)->next;

		free((*head));

		(*head) = last_node;
	}

	(*head) = NULL;
}
