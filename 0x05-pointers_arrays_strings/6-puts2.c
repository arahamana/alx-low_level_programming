#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @s: string to print
 * Return: Always 0
 */
int puts2(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}
		i++;
	}
	_putchar('\n');
}
