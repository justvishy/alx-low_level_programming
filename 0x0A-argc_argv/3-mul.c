#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - funcrion
 *
 * @argc: int
 * @argv: char
 * Return: 0 or 1
 */

int main(int argc , char *argv[])
{
	int result = 1;
	int count = 1;

	if (argc > 1)
	{
		while (count < argc)
		result = result * strtol((argv[count]));
		printf("%d\n", result);
		count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
