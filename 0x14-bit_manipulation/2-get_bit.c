#include "main.h"

/**
 * get_bit - returns the bit at an index in a decial num
 * @n: number to find
 * @index: index of bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int current;

	if (index > 63)
		return (-1);

	current = (n >> index) & 1;
	return (current);
}
