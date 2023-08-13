#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/*
 * is_palindrome - returns 1 if a string is a palindrome and 0 otherwise.
 * @s - variable to reverse
 * return - 1 if its palindrome and 0 otherwise.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/*
 * _strlen_recursion - counts length of string
 * @s - variable to count string from
 * return - length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/*
 * check_pal - checks string recursively for palindrome
 * @s - variable to check
 * @i - iterator
 * @len - length of string
 * return - 1 if palindrome and 0 otherwise
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
