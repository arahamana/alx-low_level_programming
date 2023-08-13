#include "main.h"

/*
 * _strlen_recursion - prints length of a string.
 * @s - the string to be counted.
 * return - the string length.
 */

int _strlen_recursion(char *s)
{
	int stringLength = 0;

	if (*s)
	{
		stringLength++;
		stringLength += _strlen_recursion(s + 1);
	}
	return (stringLength);
}
