#include "main.h"

/**
 * string_toupper - change all lowercase letters to uppercase
 * @s: string
 * Return: string with all lowercase letters changed to uppercase
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (s);
}
