#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0
 */

int main(void)
{
	for (int num1 = 0; num1 < 10; num1++)
	{
		for (int num2 = 0; num2 < 10; num2++)
		{
			for (int num3 = 0; num3 < 10; num3++)
			{
				for (int num4 = (num3 == num1) ? num2 + 1 : 0; num4 < 10; num4++)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(' ');
					putchar(num3 + '0');
					putchar(num4 + '0');

					if (!(num1 == 9 && num2 == 8 && num3 == 9 && num4 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
