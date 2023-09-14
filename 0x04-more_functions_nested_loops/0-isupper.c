#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 *
 * @c: integer representing a character (ASCII code)
 * Return: 1 if c is uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
