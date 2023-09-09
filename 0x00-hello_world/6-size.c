#include <stdio.h>

/**
 * main - Entry point
 *
 * Print the size of various data types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %d byte(s)", sizeof(long));
	printf("Size of a long long int: %i byte(s)", sizeof(long long int ));
	printf("Size of a float: %i byte(s)", sizeof(float));
	return(0);
}
