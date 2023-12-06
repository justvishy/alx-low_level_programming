#include <stdio.h>

/**
 * main - this is a function
 *
 * Return: 0
 */

int main(void)
{
	float val1 = 1;
	float val2 = 2;
	float fib;
	int x = 3;

	printf("%f, %f, ", val1, val2);
	while (x <= 98)
	{
		fib = val1 + val2;
		val1 = val2;
		val2 = fib;

		printf("%f", val2);

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
