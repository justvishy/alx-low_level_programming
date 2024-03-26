#include "main.h"

/**
 * factorial - this prints out the factorial of the number
 *
 * @n: the int number
 * Return: int
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
