#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to pointer of the list
 *
 * Return: returns the head node data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *head_node;
	int data;

	if (head == NULL)
		return (0);

	head_node = (*head);

	if (head_node == NULL)
		return (0);

	data = head_node->n;

	head_node = head_node->next;

	(*head) = head_node;

	return (data);
}
