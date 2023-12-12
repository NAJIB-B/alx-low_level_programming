#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint - prints all elements of a list
 * @h: pointer to the list
 *
 * Return: returns size of the list or NULL otherwise
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		++size;
	}

	printf("%d\n", h->n);
	++size;

	return (size);
}
