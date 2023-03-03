#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @str: the string to encode
 * Return: a pointer to the modified string.
 */

char *leet(char *str)
{
	int i, j;
	char *leet = "A4E3O0T7L1";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j += 2)
{
if (str[i] == leet[j] || str[i] == leet[j + 1])
{
str[i] = leet[j + 1];
break;
}
}
}
return (str);
}
