#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0
 */

int main(void)
{
	int num1 = 48;
	int num2 = 48;
	int num3 = 48;
	int num4 = 49;

	for (num1; num1 <= 57; num1++)
	{
		for (num2; num2 <= 57; num2++)
		{
			for (num3; num3 <= 57; num3++)
			{
				for (num4; num4 <= 57; num4++)
				{
					if (num4 >= 50 || num3 > 48)
					{
						putchar(',');
						putchar(' ');
					}
					putchar(num1);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);
				}
				num4 = 48;
			}
			num3 = num1;
			num4 = num2 + 2;
		}
		num2 = 48;
		num3 = num1 + 1;
		num4 = num2;
		num4 += 1;
	}
	putchar('\n');
	return (0);
}

