#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to be appended
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
