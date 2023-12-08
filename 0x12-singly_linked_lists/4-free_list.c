#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees memory allocated to a list
 * @head: pointer to the head of the list
 *
 */
void free_list(list_t *head)
{
	list_t *last_node, *temp;

	if (head == NULL)
		return;

	last_node = head;

	while (last_node->next != NULL)
	{
		temp = last_node->next;

		free(last_node->str);
		free(last_node);

		last_node = temp;
	}

	free(last_node->str);
	free(last_node);
}
