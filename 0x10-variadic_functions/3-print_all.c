#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints any argument passed to it
 * @format: list of types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int vformat, i = 0;
	char *s;
	va_list args;

	while (format)
	{
		va_start(args, format);
		while (format[i] != '\0')
		{
			vformat = 1; /* check if previous format was recognized */
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s", s);
					break;
				default:
					vformat = 0;
					break;
			}
			if (format[i + 1] && vformat > 0)
				printf(", ");
			i++;
		}
		va_end(args);
		break;
	}
	printf("\n");
}
