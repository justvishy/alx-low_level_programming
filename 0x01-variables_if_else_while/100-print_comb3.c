#include <stdio.h>

/**
 * main - this is a main function
 * Return: A string
 */

int main(void)
{
	int num1 = 48;
	int num2 = 49;
	int limit = 48;

	while (num1 <= 56)
	{
		while (num2 <= 57)
		{
			if (num1 != num2)
			{
				putchar(num1);
				putchar(num2);
			}

			if (num1 != 58 && num2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
		limit++;
		num2 = limit;
	}
	putchar('\n');
	return (0);
}
