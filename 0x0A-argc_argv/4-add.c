#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int check;

	if (argc > 2)
	{
		while (count < argc)
		{
			while (argv[count != NULL])
			{
				check = 0;
				if (isdigit(*argv[check]) && *argv[check] != '\0')
				{
					check++;
				}
				else if (*argv[check] == '\0')
				{
					result += atoi(argv[count]);
					count++;
					check = 0;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			count++;
		}
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
