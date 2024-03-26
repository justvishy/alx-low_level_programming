#include "main.h"

/**
 * _pow_recursion - prints the power of the number
 *
 * @x: int 1
 * @y: int 2
 *
 * Return: the power
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		y -= 1;
		return x * _pow_recursion(x, y);
	}
}
