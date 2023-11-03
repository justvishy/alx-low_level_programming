#include <ctype.h>
#include "main.h"

/**
 * _isupper - this finds the uppercase letter
 * @c: it is the input named c
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
