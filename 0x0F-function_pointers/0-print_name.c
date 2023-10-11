#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: string
 * @f: function pointer that takes argument of type char *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
