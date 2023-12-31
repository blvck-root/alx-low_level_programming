#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
