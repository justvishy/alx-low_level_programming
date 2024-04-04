#include "main.h"
#include <stdio.h>

/**
 * main - funcrion
 *
 * *argc: int
 * *argv: char
 * Return: 0 or 1
 */

int main(int argc , char *argv[])
{
	int result = 1;

	if (argc > 1)
	{
		result = (*argv[1] - '0') * (*argv[2] - '0');
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}		
