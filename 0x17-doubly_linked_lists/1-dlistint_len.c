#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - get the size of a list
 * @h: the list to check the size of
 *
 * Return: returns the size of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *temp;

	if (h == NULL)
		return (0);

	temp = h;

	while (temp != NULL)
	{
		++size;
		temp = temp->next;
	}

	return (size);
}
