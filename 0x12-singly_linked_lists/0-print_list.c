#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints a linked list to the console
 * @h: pointer to linked list
 *
 * Return: returns number of nodes
 */

size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			return (1 + print_list(h->next));
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			return (1 + print_list(h->next));
		}

	}
	printf("[%d] %s\n", h->len, h->str);
	return (1);
}
