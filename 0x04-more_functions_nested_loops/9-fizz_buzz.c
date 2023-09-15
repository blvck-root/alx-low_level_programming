#include <stdio.h>

/**
 * main - classic FizzBuzz program
 * Return: 0
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n > 1)
			printf(" ");
		if (n % 3 != 0 && n % 5 != 0)
			printf("%d", n);
		if (n % 3 == 0)
			printf("Fizz");
		if (n % 5 == 0)
			printf("Buzz");
		n++;
	}
	printf("\n");
	return (0);
}
