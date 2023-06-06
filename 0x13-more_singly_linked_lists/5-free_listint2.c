#include "lists.h"

/**
 * free_listint2 - frees the linked lists
 * @head: pointer to the listint_t to be free
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;


	while (*head)
	{
		current = (*head)->next;
		free(current);
		*head = current;
	}

	*head = NULL;
}
