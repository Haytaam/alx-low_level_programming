#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet x10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char x;
	int n = 0;

	while (n <= 9)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
			_putchar('\n');
			n++;
	}
}
