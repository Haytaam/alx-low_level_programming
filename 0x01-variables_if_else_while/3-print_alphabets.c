#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char upletter = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (upletter <= 'Z')
	{
		putchar(upletter);
		upletter++;
	}
	putchar('\n');
	return (0);
}

