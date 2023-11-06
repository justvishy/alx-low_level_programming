#include "main.h"

/**
 * jack_bauer - this is a function
 */

void jack_bauer(void)
{
	int d1 = 48;
	int d2 = 48;
	int d3 = 48;
	int d4 = 48;

	while (d1 <= 50)
	{
		while ((d1 == 50 && d2 <= 51) || (d1 < 50 && d2 <= 57))
		{
			while (d3 <= 53)
			{
				while (d4 <= 57)
				{
					_putchar(d1);
					_putchar(d2);
					_putchar(58);
					_putchar(d3);
					_putchar(d4);
					_putchar('\n');
					d4++;
				}
				d3++;
				d4 = 48;
			}
			d2++;
			d3 = 48;
		}
		d1++;
		d2 = 48;
	}
}
