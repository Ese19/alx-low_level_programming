#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase.
 * main - calls print_alphabet function
 * Return : 0
 */

void print_alphabet(void)
{
	char i;
	
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
