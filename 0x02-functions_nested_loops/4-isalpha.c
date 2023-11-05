#include "main.h"
#include <ctype.h>

/**
 * _isalpha - this finds the upper character01
 * @c: this is the input
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
