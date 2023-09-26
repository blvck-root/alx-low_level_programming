#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer
 * @size: size of the matrix
 * Return: what does your_function return
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;
	int a_len = size * size;

	for (i = 0; i < a_len; i += size + 1)
		sum1 += a[i];

	for (j = size - 1; j < a_len - 1; j += size - 1)
		sum2 += a[j];

	printf("%d, %d\n", sum1, sum2);
}
