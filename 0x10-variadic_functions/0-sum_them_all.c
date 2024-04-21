#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all the numbers input
 *
 * @n: numbers input
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int m = (int)(n), i;
	unsigned int sum = 0;

	va_start(args, n);
	
	if (n == 0)
		return (0);

	i = 0;
	while (i < m)
	{
		sum += va_arg(args, int);
		i++;
	}

	va_end(args);
	return (sum);
}
