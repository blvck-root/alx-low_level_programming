#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be matched
 * @accept: string containing characters to match
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int match;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}

		if (match == 1)
			count++;
		else
			return (count);
	}
	return (count);
}
