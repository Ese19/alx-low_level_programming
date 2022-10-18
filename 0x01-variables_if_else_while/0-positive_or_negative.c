#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/** main - Checks and prints if random number is positive or negative 
 * Return: 0 
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if(n < 0)
	{
		printf("%zu is negative\n", n) 
	}
	else
	{
		printf("%zu is positive\n", n)
	}

	return (0);
}
