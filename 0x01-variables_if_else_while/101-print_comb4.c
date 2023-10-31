#include <stdio.h>

/**
 * main - This is a main function
 *
 * Return: 0
 */

int main(void)
{
	int num1 = 48;
	int num2 = 49;
	int num3 = 50;
	int repeat = 0;

	while (num1 <= 55)
	{
		while (num2 <= 56)
		{
			while (num3 <= 57)
			{
				if (repeat == 1)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(num1);
				putchar(num2);
				putchar(num3);
				num3++;
				repeat = 1;
			}
			num2++;
			num3 = num2 + 1;
		}
		num1++;
		num2 = num1 + 1;
		num3 = num1 + 2;
	}
	putchar('\n');
	return (0);
}
