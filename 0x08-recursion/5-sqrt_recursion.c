#include "main.h"

/**
 * _sqrt_source - this is the main source for the code
 *
 * @n: this is an int
 * @i: this is an int
 * Return: int
 */

int _sqrt_source(int n, int i)
{
	if (i * i >  n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return(_sqrt_source(n, i + 1));
	}
}

/**
 * _sqrt_recursion - checks for the squared root of n
 *
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_source(n, 0));
	}
}
