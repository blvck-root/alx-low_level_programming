#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string printed between strings
 * @n: number of strings to be printed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		str = va_arg(args, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && i < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

