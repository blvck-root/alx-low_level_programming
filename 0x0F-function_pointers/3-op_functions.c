#include "3-calc.h"
#include <assert.h>

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: division of a by b
 */
int op_div(int a, int b)
{
	assert(b != 0);
	return (a / b);
}

/**
 * op_mod - finds the remainder of dividing two integers
 * @a: first integer
 * @b: second integer
 * Return: modulo of a and b
 */
int op_mod(int a, int b)
{
	assert(b != 0);
	return (a % b);
}
