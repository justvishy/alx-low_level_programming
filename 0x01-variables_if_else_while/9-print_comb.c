#include <stdio.h>

/**
 * main - this is a main function
 *
 * Return: 0
 */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);

		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
