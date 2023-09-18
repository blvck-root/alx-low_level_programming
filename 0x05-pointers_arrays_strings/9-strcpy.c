#include "main.h"
#include <string.h>

/**
 * _strcpy - copies string including '\0'
 * @dest: buffer to which string is copied
 * @src: string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int l = strlen(src);

	for (i = 0; i <= l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
