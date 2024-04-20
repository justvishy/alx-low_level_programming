#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints the name
 *
 * @name: this is the name
 * @f: f pointer
 */

void print_name(char *name, void (*f)(char *))
{
	char *ptr = "Hello, my name is ";

	if (name != NULL)
	{
		while (*ptr)
		{
			_putchar(*ptr);
			ptr++;
		}

		while (*name)
		{
			_putchar(*name);
			name++;
		}
		_putchar('\n');
	}
	else
		return;
}
