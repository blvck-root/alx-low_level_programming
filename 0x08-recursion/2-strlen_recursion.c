#include "main.h"

/**
 * _strlen_recursion - computes the length of a string
 * @s: string
 * Return: number of characters in a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;
	else
		return _strlen_recursion(s + 1) + 1;
}
