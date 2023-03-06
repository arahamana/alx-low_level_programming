#include "main.h"

/**
 * _strchr -  locates a character in a string
 *
 * @s: string to locate character in
 * @c: character to locate
 * Return: a pointer to the first occurance of c
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
