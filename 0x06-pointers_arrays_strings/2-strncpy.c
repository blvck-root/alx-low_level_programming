#include "main.h"
#include <string.h>

/**
 * _strncpy - copy at most n bytes from a string
 * @dest: string to be copied onto
 * @src: string to be copied
 * @n: number of bytes to be copied from src string
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
