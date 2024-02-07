#include "lists.h"
#include <stdio.h>


/**
 * print_dlistint - prints elements of a doubly linked list
 * @h: the list to print
 *
 * Return: returns the size of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int size = 0;

	if (h == NULL)
		return (0);

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		++size;
		temp = temp->next;
	}
	return (size);
}
