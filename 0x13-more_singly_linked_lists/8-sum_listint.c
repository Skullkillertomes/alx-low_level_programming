#include "lists.h"

/**
 * sum_listint - calculates the sum of data in a listint_t list
 * @head: first node in linked list
 *
 * Return: if the list is empty 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
