#include "main.h"

/**
 * _prime_num_src - this is the source
 *
 * @n: int
 * @i: int
 * Return: int
 */

int _prime_num_src(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	else if (i * i == n)
	{
		return (0);
	}
	else
	{
		return (_prime_num_src(n, i + 1));
	}
}

/**
 * is_prime_number - checks for prime number
 *
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else
	{
		return (_prime_num_src(n, 0));
	}
}
