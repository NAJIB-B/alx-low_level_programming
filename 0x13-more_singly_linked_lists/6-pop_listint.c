#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to pointer of the list
 *
 * Return: returns the head node data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *head_node, *temp;
	int data;

	if (head == NULL)
		return (0);

	if ((*head) == NULL)
		return (0);

	head_node = (*head);


	data = head_node->n;

	temp = head_node->next;

	free(head_node);


	(*head) = temp;

	return (data);
}
