#include "main.h"
/**
 * isdigit - function that checks for a digit
 * @c: num to be checked
 * Return: 1 for digits, 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}