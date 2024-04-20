#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds
 *
 * @a: val1
 * @b: val2
 *
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract
 *
 * @a: val1
 * @b: val2
 *
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 *
 * @a: val1
 * @b: val2
 *
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide
 *
 * @a: val1
 * @b: val2
 *
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo
 *
 * @a: val1
 * @b: val2
 *
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
