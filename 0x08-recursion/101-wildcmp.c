#include "main.h"

/*
 * wildcmp - compares two string and return 1 if identical and 0 otherwise
 * @s1 - pointer to string prameter
 * @s2 - pointer to string parameter
 * return - 1 if string is identical and 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\n')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
