#include <ctype.h>
#include "main.h"

/**
 * _isdigit - this finds the digit
 * @c: this is a input named c
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
