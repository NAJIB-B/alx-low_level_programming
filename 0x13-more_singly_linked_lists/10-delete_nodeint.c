#include "lists.h"


/**
 * listint_len - returns list length of a list
 * @h: pointer to the list
 *
 * Return: returns size of the list or NULL otherwise
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		++size;
	}

	++size;

	return (size);
}


/**
 * delete_nodeint_at_index - deletes a node from a list at a certain
 * index
 * @head: pointer to pointer of the list
 * @index: index to delete from
 *
 * Return: 1 if successful and -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *last_node, *next_node;
	unsigned int i = 0, length;

	if (head == NULL)
		return (-1);

	length = listint_len((*head));
	if (index > (length - 1))
		return (-1);

	if ((*head) == NULL)
		return (-1);

	next_node = (*head);

	if (index == 0)
	{
		if (next_node->next == NULL)
		{
			(*head) = NULL;
			return (1);
		}
		(*head) = next_node->next;
		return (1);
	}

	while (i < index)
	{
		last_node = next_node;
		next_node = next_node->next;
		++i;
	}

	last_node->next = next_node->next;

	return (1);
}
