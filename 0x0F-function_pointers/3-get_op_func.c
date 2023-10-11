#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - selects correct function to perform user operation
 * @s: operator
 * Return: function that takes in two integers and returns an int
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	printf("%s", ops[i].op);
	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		++i;
	}
	return (NULL);
}
