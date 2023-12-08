#include "main.h"

/**
 * more_numbers - prints 0 to 14
 */

void more_numbers(void)
{
	int repeat = 48;
	int x = 0;

	while (repeat <= 57)
	{
		while (x <= 14)
		{
			if (x > 9)
			{
				_putchar(x / 10 + 48);
			}

			_putchar(x % 10 + 48);
			x++;
		}
		x = 0;
		repeat++;
		_putchar('\n');
	}
}

