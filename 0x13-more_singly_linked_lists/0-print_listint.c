#include "lists.h"

/**
 * print_listint - prints element of a linked list
 * @h: linkd list listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d ", h->n);
		h = h->next;
		count++;
	}
	printf("\n");
	return (count);
}
