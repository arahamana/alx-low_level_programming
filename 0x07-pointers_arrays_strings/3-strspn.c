#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: memory to store length from accept
 * @accept: where to get length of string from
 * Return: number of bytes in s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;

	int index;

	for (*s;)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
