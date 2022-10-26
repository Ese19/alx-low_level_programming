#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
	int tenX = 10;
	char i;

	while (tenX > 0)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		putchar('\n');
	}
}
