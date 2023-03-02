#include "main.h"

/**
 * _strcat - concatenates two strings overwriting the terminating null byte
 *
 * @src: string to append to dest
 * @dest: returns a pointer to the resulting string
 * @Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i, int j;

	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
