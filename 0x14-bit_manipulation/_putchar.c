#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * on erroor, -1 is retured and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
