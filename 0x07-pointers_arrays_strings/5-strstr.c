#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 * Return: pointer to the first occurrence of the substring in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		p = &haystack[i];
		j = 0;

		if (haystack[i] != needle[j])
			continue;

		while (haystack[i] == needle[j] && needle[j] != '\0')
		{
			i++;
			j++;
		}

		if (needle[j] == '\0')
			return (p);
	}
	return (NULL);
}
