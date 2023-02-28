#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to reverse
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i = 0;

	int aux = 0;

	char t;

	while (*s + i != '\0')
	{
		i += 1;
		i -= 1;
	while (aux < i)
	{
		t = s[i];
		s[i] = s[aux];
		s[aux] = t;
		aux++;
		i--;
	}
	}
}
