#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to string with chars in s1 and s2 respectively
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *s;

	/* if an argument is NULL treat it as an empty string */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;
	s = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(s1[0]));

	if (s == NULL)
		return (NULL);

	while (*s1 != '\0')
		s[i++] = *s1++;

	while (*s2 != '\0')
		s[i++] = *s2++;
	s[i] = '\0';

	return (s);
}
