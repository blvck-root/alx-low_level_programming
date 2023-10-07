#include "main.h"
#include <stdlib.h>
#include <string.h>
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
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	unsigned int n1 = n < len2 ? n : len2;
	char *s = malloc(len1 + n1 + 1);

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
