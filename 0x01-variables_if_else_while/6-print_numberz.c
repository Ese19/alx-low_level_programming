#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
