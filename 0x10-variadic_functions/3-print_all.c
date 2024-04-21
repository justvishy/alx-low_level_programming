#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - this prints all type inputs
 *
 * @format: input
 */

void print_all(const char *const format, ...)
{
	char *str;
	char *separ = "";
	va_list args;
	int i;

	va_start(args, format);

	i = 0;
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separ, (char)va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separ, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separ, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);

					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separ, str);
					break;
				default:
					i++;
					continue;
			}
			separ = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
