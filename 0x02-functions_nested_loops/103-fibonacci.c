#include <stdio.h>

/**
 * main - this is a  function
 *
 * Return: 0
 */

int main(void)
{
	long int val1 = 1;
	long int val2 = 2;
	long int fib;
	int sum = 2;

	while (fib < 4000000)
	{
		fib = val1 + val2;
		val1 = val2;
		val2 = fib;

		if (val2 % 2 == 0)
		{
			sum += fib;
		}
	}
	printf("%d\n", sum);
	return (0);
}
