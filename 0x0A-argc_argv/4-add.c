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
		while (argv[count] != NULL)
		{
			check = 0;
			if (!isdigit(*argv[count][check]) && *argv[count][check] != '\0')
			{
				printf("Error\n");
				return (1);
			}
			else if (*argv[count][check] == '\0')
			{
				break;
			}
			else
			{
				check++;
			}
		result += atoi(argv[count]);
		count++;
		}
		printf("%d\n", result);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
