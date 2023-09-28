#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	int next_s2;

	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 != *s2 && *s2 != '*')
		return (0);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	next_s2 = *(s2 + 1);

	if (next_s2 == *s1)
		return (wildcmp(s1, s2 + 1) > 0 || wildcmp(s1 + 1, s2) > 0);
	else if (next_s2 == '*')
		return (wildcmp(s1, s2 + 1));
	else
		return (wildcmp(s1 + 1, s2));
}
