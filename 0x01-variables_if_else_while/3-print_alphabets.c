#include <stdio.h>

/**
 * main - this is a main function
 *
 * Return: 0
 */

int main(void)
{
	int lAlpha = 97;
	int hAlpha = 65;

	while (lAlpha <= 122)
	{
		putchar(lAlpha);
		lAlpha++;
	}

	while (hAlpha <= 90)
	{
		putchar(hAlpha);
		hAlpha++;
	}

	putchar('\n');

	return (0);
}
