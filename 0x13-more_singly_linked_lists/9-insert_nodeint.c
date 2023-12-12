#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: pointer to pointer to the list
 * @idx: index to insert the node
 * @n: data to insert in the node
 *
 * Return: returns address of the new node or NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0, length;
	listint_t *new, *last_node, *next_node;

	if (head == NULL)
		return (NULL);
	if ((*head) ==NULL)
		return (NULL);

	length = listint_len((*head));

	if (idx > length)
		return (NULL);

	next_node = (*head);

	while (i < idx)
	{
		last_node = next_node;
		next_node = next_node->next;
		++i;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	last_node->next = new;
	new->n = n;
	new->next = next_node;

	return (new);
}
