#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - prints length of a linked list to the console
 * @h: pointer to linked list
 *
 * Return: returns number of nodes
 */

size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next != NULL)
	{
		return (1 + list_len(h->next));

	}
	return (1);
}
