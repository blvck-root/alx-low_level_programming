#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number command line arguments
 * @argv: array containing command line arguments
 * Return: O (success)
 */
int main(int __attribute__((unused)) argc, char __attribute__((unused)) **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
