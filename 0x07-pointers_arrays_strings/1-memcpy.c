#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: unsigned integer
 * Return: what does your_function return
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
