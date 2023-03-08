#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number to find the natural square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a
 *         natural square root.
 */
int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
return (n);

int i;

for (i = 1; i <= n / 2; i++)
{
if (i * i == n)
return (i);
else if (i * i > n)
break;
}

return (_sqrt_recursion(n - 1));
}
