#include "main.h"
#include <stdio.h>

/**
 * main - function
 *
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (*argv)
	{
		argv++;
		count++;
	}

	printf("%d\n", count);

	return (0);
}
