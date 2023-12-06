#include <stdio.h>

/**
 * main - this is a function
 *
 * Return: 0
 */

int main(void)
{
	long double val1 = 1;
	long double val2 = 2;
	long double fib;
	int x = 3;

	printf("%0.Lf, %0.Lf, ", val1, val2);
	while (x <= 98)
	{
		fib = val1 + val2;
		val1 = val2;
		val2 = fib;

		printf("%0.Lf", val2);

		if (x != 98)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		x++;
	}
	return (0);
}
