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
	int i;
	char *s;

	if (str == NULL)
		return (NULL);

	i = 0;
	s = malloc((strlen(str) + 1) * sizeof(str[0]));
	/* increment strlen(str) to allocate memory for '\0'*/

	if (s == NULL)
		return (NULL);

	while (*str != '\0')
		s[i++] = *str++;

	return (s);
}
