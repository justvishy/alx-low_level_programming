#include <stdio.h>

/**
 * main - this is a main function
 *
 * Return: 0
 */

int main(void)
{
	int num = 48;
	int alpha = 97;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	while (alpha <= 102)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
