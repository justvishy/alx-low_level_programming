#include "main.h"
#include <ctype.h>

/**
 * _islower - this finds the upper character01
 * @c: this is the input
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
