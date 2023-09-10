#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	char digits[12] = "0123456789\n";

	/* Print single digit numbers of base 10 */
	while (i <= 10)
		putchar(digits[i++]);

	return (0);
}
