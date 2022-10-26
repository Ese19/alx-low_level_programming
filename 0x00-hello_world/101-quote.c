#include <stdio.h>

/**
 * main -  prints text
 * Return: 1
 */

int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; i != '\0'; i++)
	{
		putchar(message[i]);
	}
	putchar('\n');
	return (1);
}
