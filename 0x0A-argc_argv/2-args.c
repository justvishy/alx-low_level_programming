#include "main.h"
#include <stdio.h>

/**
 * main - function
 *
 * @argc: int
 * @argv: char
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}

	return (0);
}
