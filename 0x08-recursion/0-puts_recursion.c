#include "main.h"

/*
 * _puts_recursion - prints a string followed by a newline.
 * @s: memory allocation for input
 * return: always 0 on success
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
