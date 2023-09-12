#include "main.h"

/**
 * _islower - check if a character is lowercase
 *
 * @c: integer corresponding to the ASCII code of a character
 * Return: 1 if c is lowercase character
 */
int _islower(int c)
{
	if (c >= 95 && c < 123)
		return (1);
	else
		return (0);
}
