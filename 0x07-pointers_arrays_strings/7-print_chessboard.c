#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * print_chessboard - this prints the chess board
 *
 * @a: its a char
 */

void print_chessboard(char (*a)[8])
{
	int z;
	int x;

	z = 0;
	while (z < 8)
	{
		x = 0;
		while (x < 0)
		{
			_putchar(a[z][x]);
			x++;
		}
		_putchar('\n');
		z++;
	}
}
