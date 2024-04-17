#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	char *filename = __FILE__;

	while (*filename)
	{
		_putchar(*filename);
		filename++;
	}
	_putchar('\n');
	return (0);
}
