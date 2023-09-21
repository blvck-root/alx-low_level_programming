#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings taking at most n bytes from src
 * @dest: string to be appended to
 * @src: string to be appended
 * @n: number of bytes to be copied from src string
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
