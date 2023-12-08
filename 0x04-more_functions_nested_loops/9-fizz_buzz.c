#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0
 */

int main(void)
{
	int num = 1;

	while (num < = 100)
	{
		if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0 && num % 3 != 0)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", num);
		}

		if (num != 100)
		{
			printf(" ");
		}
		num++;
	}
	printf("\n");
	return (0);
}
