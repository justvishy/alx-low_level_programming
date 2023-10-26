#include <stdio.h>

/**
 * main - this is a main function
 * Return: 1
 */

int main(void)
{
	char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int a = 0;

	while (string[a] != '\0')
	{
		putchar(string[a]);
		a++;
	}
	putchar('\n');

	return (1);
}
