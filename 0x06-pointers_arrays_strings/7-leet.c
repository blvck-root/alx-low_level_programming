#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: string encoded into 1337
 */
char *leet(char *s)
{
	int i, j;
	char *alpha = "aeotl";
	char *code = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j] || s[i] + 32 == alpha[j])
				s[i] = code[j];
		}
	}
	return (s);
}
