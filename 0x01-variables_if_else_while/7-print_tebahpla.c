#include <stdio.h>

/**
 * main - this is a main function
 *
 * Return: 0
 */

int main(void)
{
	int revAlpha = 122;

	while (revAlpha >= 97)
	{
		putchar(revAlpha);
		revAlpha--;
	}
	putchar('\n');
	return (0);
}
