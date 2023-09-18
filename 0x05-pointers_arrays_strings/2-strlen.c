#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer of type char
 * Return: number of characters in string s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
