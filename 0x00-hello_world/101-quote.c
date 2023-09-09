#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	char s[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	/* print string using putchar built-in */
	for (i = 0; i < 59; i++)
		putchar(s[i]);
	return (1);
}
