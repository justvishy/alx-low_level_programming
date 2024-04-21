#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints the string
 *
 * @separator - this is the separator
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int m = (int)(n), i;
	char *val;
	va_list args;

	va_start(args, n);

	i = 0;
	while (i < m)
	{
		val = va_arg(args, char *);

		if (val != NULL)
			printf("%s", val);
		else
			printf("(nil)");

		if (i != (m - 1) && separator != NULL)
			printf("%s", separator);

		i++;
	}
	printf("\n");
}
