#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: is the separator
 * @n: number of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int m = (int)(n), i, val;
	va_list args;

	va_start(args, n);

	i = 0;
	while (i < m)
	{
		val = va_arg(args, int);
		printf("%d", val);

		if (i != (m - 1) && separator != NULL)
			printf("%s", separator);

		i++;
	}
	printf("\n");
}
