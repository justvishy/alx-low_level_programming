#include <stdio.h>

/**
 * main - this is the main function
 *
 * return: 0
 */

int main(void)
{
	int num1 = 48;
	int num2 = 48;
	int num3 = 48;
	int num4 = 49;
	int set = 48;

	while ((num1 <= 57 && num2 <= 57 && num3 <= 57 && num4 <= 57))
	{
		int (set = 49)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(num1);
		putchar(num2);
		putchar(' ');
		putchar(num3);
		putchar(num4);
		set = 49;

		if (num4 <= 57)
		{
			num4++;
		}

		if (num4 == 58)
		{
			num3++;
			num4 = 48;
		}

		if (num3 == 58 && num2 != 57)
		{
			num2++;
			num3 = num1;
			num4 = num2 + 1;
		}

		if (num2 == 57)
		{
			num1++;
			num2 = 48;
			num3 = num1;
			num4 = num2 + 1;
		}
	}
	putchar('\n');
	return (0);
}
