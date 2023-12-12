#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the list
 * @index: the index of the node to return
 *
 * Return: pointer to the node or NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node;

	if (head == NULL)
		return (NULL);

	current_node = head;

	while (i < index)
	{
		if (current_node->next == NULL)
			return (NULL);

		current_node = current_node->next;
		++i;
	}

	return (current_node);
}
