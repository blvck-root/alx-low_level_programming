#include <unistd.h>

/**
 * _putchar - uses the write func to print a character
 *
 * @c: parameter of type char
 * Return: 
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
