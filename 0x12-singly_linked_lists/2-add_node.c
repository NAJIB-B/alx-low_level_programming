#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a node to a single node
 * @head: pointer to pointer of the current node
 * @str: string to add in the node
 *
 * Return: pointer to the updated list
 */
list_t *add_node(list_t **head, const char *str)
{
	if (head == NULL)
		return (NULL);

	list_t *new;

	new =  malloc(sizeof(list_t));
	new->len = _strlen(str);
	new->str = strdup(str);
	new->next = *head;

	return (new);


}

/**
 * _strlen - returns length of string
 * @str: string to check
 *
 * Return: length of string or 0 otherwise
 */
unsigned int _strlen(char *str)
{
	int i, size = 0;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; ++i)
	{
		++size;
	}
	return (size);
}
