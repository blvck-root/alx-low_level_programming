#include "main.h"

/**
 * cap_string - capitalize every word in a string
 * @s: string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i, j;
	char *sep = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i - 1] == sep[j] && s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
