#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string printed between numbers
 * @n: number of integers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

