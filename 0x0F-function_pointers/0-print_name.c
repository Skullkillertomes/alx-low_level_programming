#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Prints a name
 * @name: The name to prints
 * @f: pointer to function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
