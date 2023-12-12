#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free memory allocated by list
 * @head: pointer to the list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *last_node;


	while (head->next != NULL)
	{
		last_node = head->next;

		free(head);

		head = last_node;
	}

	free(head);
}
