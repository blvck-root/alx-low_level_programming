#include "3-calc.h"

/**
 * get_op_func - selects correct function to perform user operation
 * @s: operator
 * Return: function that takes in two integers and returns an int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (s && *s == *(ops[i].op) && !s[1])
			return (ops[i].f);
		++i;
	}
	return (NULL);
}
