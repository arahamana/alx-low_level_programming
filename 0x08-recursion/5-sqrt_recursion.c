#include "main.h"

int actual_sqrt_recursion(int n, int i);

/*
 * _sqrt_recursion - returns natural square root of a number.
 * @n - variable to get square root of.
 * return - square root of variable.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/*
 * actual_sqrt_recursion - recurse to find  to find natural square root
 * @n - variable to gwt square root from.
 * @i - iterator
 * return - square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
