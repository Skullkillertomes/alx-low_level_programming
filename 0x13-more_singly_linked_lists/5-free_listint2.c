#include "lists.h"

/**
 * free_listint2 - frees the linked lists
 * @head: pointer to the listint_t to be free
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
	{
		return;
	}

	listint_t *current;

	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);
		current = next;
	}
	*head = NULL;
}
