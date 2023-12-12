#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to the pointer of the list
 * n: number to add
 *
 * Return: returns the address of the new element of NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	temp = (*head);
	new->n = n;
	new->next = temp;

	(*head) = new;

	return ((*head));
}
