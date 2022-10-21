#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0
 */

int main(void)
{
	int i, j, k;
	
	for (i = 0; i < 10; i++)
	{
		for (j = i+1; i < 10; i++)
		{
			for (k = j+1; k < 10; k++)
			{
				if (i != j && j != k )
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
				}
				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
