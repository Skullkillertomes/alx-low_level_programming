#include "lists.h"

/**
 * get_nodeint_at_index - returns node index in a linked list
 * @head: first node of linked list
 * @index: index node to return
 *
 * Return: pointer to the node or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node = head;

	while (current_node && i < index)
	{
		current_node = current_node->next;
		i++;
	}

	return (current_node ? current_node : NULL);
}
