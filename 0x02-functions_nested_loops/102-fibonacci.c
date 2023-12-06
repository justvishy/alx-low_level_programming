#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0
 */

int main(void)
{
	long long val1 = 1;
	long long val2 = 2;
	long long fib;

	printf("%lld, %lld, ", val1, val2);

	for (int x = 3; x <= 50; x++)
	{
		fib = val1 + val2;

		printf("%lld", fib);

		if (x != 50)
		{
			printf(", ");
		}
		val1 = val2;
		val2 = fib;
	}
}
