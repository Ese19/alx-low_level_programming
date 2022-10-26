#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: type int
 * Return: 1 if true and 0 if false
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
