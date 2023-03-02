#include "main.h"

/**
 * _strncat - concatenates two strings using most n bytes from src
 *
 * @n: bytes to use
 * @src: string pointer to store value
 * @dest: pointer to return value
 *
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, int j;

	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
