#include "main.h"

/**
 * set_bit - set a given index to 1
 * @n: pointer to the number
 * @index: index set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n |= (1 << index);
	return (1);
}
