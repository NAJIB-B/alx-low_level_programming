#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_len - prints length of a linked list to the console
 * @h: pointer to linked list
 *
 * Return: returns number of nodes
 */

size_t print_len(const list_t *h)
{
	if (h == NULL)
		return (-1);
	if (h->next != NULL)
	{
		return (1 + print_len(h->next));

	}
	return (1);
}
