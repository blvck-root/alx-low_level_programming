#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: number command line arguments
 * @argv: array containing command line arguments
 * Return: O (success)
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
