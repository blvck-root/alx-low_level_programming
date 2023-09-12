#include "main.h"

/**
 * _isalpha - check if a character is a letter of the alphabet
 *
 * @c: integer corresponding to the ASCII code of a character
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 95 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
