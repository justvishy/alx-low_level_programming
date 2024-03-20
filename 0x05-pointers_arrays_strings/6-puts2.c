#include "main.h"
#include <string.h>

/**
 * puts2 - this prints every second character
 *
 * @str: - this is a string
 */

void puts2(char *str)
{
	int length = strlen(str);
	int start = 0;
	int end = length;

	while (start < end)
	{
		_putchar(str[start]);
		start = start + 2;
	}
	_putchar('\n');
}

