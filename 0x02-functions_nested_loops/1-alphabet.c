#include "main.h"

/**
 * print_alphabet - this prints a-z
 */

void print_alphabet(void)
{
	int alpha = 97;
	
	while (alpha <= 122)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
