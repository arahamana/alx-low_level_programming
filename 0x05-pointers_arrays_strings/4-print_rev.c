#include "main.h"

/**
 * print_rev - reverses a string
 *
 * @s: string to reverse
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

