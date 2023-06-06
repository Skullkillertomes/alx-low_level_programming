#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: pointer to element in linked list
 *
 * Return: data inside the elements deleted
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;

	current = (*head)->next;
	free(*head);
	*head = current;

	return (n);
}
