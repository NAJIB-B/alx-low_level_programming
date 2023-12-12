#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

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
