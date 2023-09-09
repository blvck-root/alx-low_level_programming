#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alphabet[30] = "abcdefghijklmnopqrstuvwxyz\n";
	char ch;

	for (i = 0; i < 54; i++)
	{
		if (i < 26)
		{
			putchar(alphabet[i]);
		}
		else if (i > 26)
		{
			ch = alphabet[i - 27];
			putchar(toupper(ch));
		}
	}
	return (0);
}
