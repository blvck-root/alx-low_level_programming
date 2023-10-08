#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 * Return: what does your_function return
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int n1;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	n1 = n < len2 ? n : len2;
	s = malloc(sizeof(*s) * len1 + n + 1);

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	i = 0;
	while (i < n1)
	{
		s[len1 + i] = s2[i];
		i++;
	}
	s[len1 + i] = '\0';
	return (s);
}
