#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	/* Print single digit numbers of base 10 */
	while (i < 10)
		putchar('0' + i++);
	putchar('\n');

	return (0);
}
