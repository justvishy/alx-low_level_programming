#include "main.h"

/**
 * time_table - this is a function
 */

void times_table(void)
{
	int num1 = 0;
	int num2 = 0;
	int multiple;

	while (num1 <= 9)
	{
		while (num2 <= 9)
		{
			multiple = num1 * num2;

			if (num2 != 0)
			{
				_putchar(' ');
			}

			if (multiple > 9)
			{
				_putchar((multiple / 10) + 48);
			}

			if (multiple < 10 && num2 != 0)
			{
				_putchar(' ');
			}

			_putchar((multiple % 10) + 48);

			if (num2 != 9)
			{
				_putchar(',');
			}
			num2++;
		}
		_putchar('\n');
		num1++;
		num2 = 0;
	}
}
