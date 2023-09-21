#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: int denoting the difference between the differing characters
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	int n = s1_len >= s2_len ? s1_len : s2_len;

	for (i = 0; i < n && s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
