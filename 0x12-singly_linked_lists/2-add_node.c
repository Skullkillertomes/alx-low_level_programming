#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a ode at the begining of a linked list
 * @head: double pointer to the list
 * @str: new string to the add in the node
 *
 * Return: the address of the new element , or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
