#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alphabet[30] = "abcdefghijklmnopqrstuvwxyz\n";

	for (i = 0; i < 27; i++)
		putchar(alphabet[i]);

	return (0);
}
