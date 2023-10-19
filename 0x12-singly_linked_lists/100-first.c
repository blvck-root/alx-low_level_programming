#include "lists.h"
#include "unistd.h"
#include <stdio.h>

/**
 * print_first - print before the main function runs
 *
 * Return: void
 */
void print_first(void)
{
	char *str = "You're beat! and yet, you must allow,\n"
		    "I bore my house upon my back!\n";
	printf("%s", str);
}
