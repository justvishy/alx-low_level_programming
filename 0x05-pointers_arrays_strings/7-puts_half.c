#include "main.h"
#include <string.h>

/**
 * puts_half - this prints half of a string
 *
 * @str: this is a string
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int start;
	int end = length;

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}

	while (start < end)
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
