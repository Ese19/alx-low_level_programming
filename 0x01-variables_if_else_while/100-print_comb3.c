#include <stdio.h>

/**
 * main -  prints all possible different combinations of two digits.
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
			}
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
