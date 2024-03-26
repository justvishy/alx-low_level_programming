#include "main.h"

/**
 * _strlen_recursion - this prints the string length
 * 
 * @s: string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}
	else
	{
		s += 1;
		return 1 + _strlen_recursion(s);
	}
}
