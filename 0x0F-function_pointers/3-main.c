#include "3-calc.h"

/**
 * main - performs simple arithmetic operations
 * @argc: number of commandline args
 * @argv: array of commandline args
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int (*op)(int, int), num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op(num1, num2));
	return (0);
}
