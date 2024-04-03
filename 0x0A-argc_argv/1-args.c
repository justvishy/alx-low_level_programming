#include "main.h"
#include <stdio.h>

/**
 * main - function
 *
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int count = 0;

	while (*argv && *argv != '\0')
	{
		argv++;
		count++;
	}

	printf("%d\n", count);

	return (0);
}
