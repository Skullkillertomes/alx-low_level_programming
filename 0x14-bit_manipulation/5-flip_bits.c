#include "main.h"

/**
 * flip_bits - counts the number to flip
 * @n: first num
 * @m: second num
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, flick = 0;
	unsigned long int core;
	unsigned long int exel = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		core = exel >> i;
		if (core & 1)
			flick++;
	}
	return (flick);
}
