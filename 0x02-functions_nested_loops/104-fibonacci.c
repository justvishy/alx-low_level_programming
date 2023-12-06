#include <stdio.h>

/**
 * main - this is a function
 *
 * Return: 0
 */

int main(void)
{
	long int val1 = 1;
	long int val2 = 2;
	long int fib;
	int x = 3;

	printf("%ld, %ld, ", val1, val2);
	while (x <= 98)
	{
		fib = val1 + val2;
		val1 = val2;
		val2 = fib;

		printf("%ld", val2);

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
