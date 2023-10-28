#include <stdio.h>

/**
 * main - this is a main function
 *
 * Return: 0
 */

int main(void)
{
	int alpha = 97;

	while (alpha <= 122)
	{
		if (alpha == 101 || alpha == 113)
		{
			alpha++;
		}
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
