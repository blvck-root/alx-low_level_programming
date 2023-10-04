#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - return pointer to a duplicate string
 * @str: string to be duplicated
 * Return: pointer to a string
 */
char *_strdup(char *str)
{
	int i = 0;
	char *s = malloc(strlen(str) * sizeof(*str));

	if (str == NULL || s == NULL)
		return (NULL);

	while (*str != '\0')
		s[i++] = *str++;

	return (s);
}
