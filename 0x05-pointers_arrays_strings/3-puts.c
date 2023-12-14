#include "main.h"

/**
 * _puts - this is a prototype function
 *
 * @str: this is a the string
 */

void _puts(char *str)
{
	int num = 0;

	while (str[num] != '\0')
	{
		_putchar(str[num]);
		num++;
	}
	_putchar('\n');
}
