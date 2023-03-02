#include "main.h"

/**
 * _strcat - concatenates two strings src and dest
 *
 * @src: string to append to dest
 * @dest: returns a pointer to the resulting string
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
