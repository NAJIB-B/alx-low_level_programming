#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a node to a single node
 * @head: pointer to pointer of the current node
 * @str: string to add in the node
 *
 * Return: pointer to the updated list
 */
list_t *add_node_end(list_t **head, const char *str)
{

	if (head == NULL)
		return (NULL);

	*head = malloc(sizeof(list_t));

	(*head)->len = _strlen(str);
	(*head)->str = strdup(str);
	
	if ((*head)->next != NULL)
	(*head)->next = NULL;

	return ((*head));


}

