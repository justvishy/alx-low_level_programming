#include "main.h"

/**
 * _sqrt_recursion - finds the squareroot
 *
 * @n: int
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	static int z = 1;

	if (z * z == n)
	{
		return (z);
	}
	else if (z > n)
	{
		return (-1);
	}
	else
	{
		z += 1;
		int final;

		final = _sqrt_recursion(n);
		z = 0;
		return (final);
	}
}
