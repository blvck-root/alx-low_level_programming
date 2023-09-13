#include "main.h"
#include <stdio.h>
#include "_putchar.c"

/**
 * _abs - computes the value of an integer
 *
 * @n: integer
 * Return: n if n >= 0 or -n if n < 0
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int main(void) {
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
