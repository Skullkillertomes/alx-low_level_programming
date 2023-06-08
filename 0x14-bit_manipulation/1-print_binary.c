#include "main.h"

/**
 * print_binary - prints the binary of decimal
 * @n: numbar to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, route = 0;
	unsigned long int result;

	for (i = 63; i >= 0; i--)
	{
		result = n >> i;

		if (result & 1)
		{
			_putchar('1');
			route++;
		}
		else if (route)
			_putchar('0');
	}
	if (!route)
		_putchar('0');
}
