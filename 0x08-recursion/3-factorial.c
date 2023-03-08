#include "main.h"

/**
 * factorial - the factorial of a given number
 * @n: the num to calculate the factorial
 * Return: integer value
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
