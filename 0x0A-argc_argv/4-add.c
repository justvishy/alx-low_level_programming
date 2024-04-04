#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 *
 * @argc: int
 * @argv: char
 *
 * Return: 0 or 1;
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int count = 1;

	if (argc > 2)
	{
		while (count < argc)
		{
			result += atoi(argv[count]);
			count++;
		}

		if (result > 0)
		{
			printf("%d\n", result);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	else
	{
		printf("0\n");
	}

	return (0);
