#include "main.h"

/**
 * get_endianness - check if a computer uses big or little endian
 * Return: 1 if big endian, -1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c ? -1 : 1);
}
