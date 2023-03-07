#include "main.h"

/**
 * _memcpy - copies a memory area
 *
 * @dest: where to copy memory area to
 * @src: memory area to copy
 * @n: input value
 * Return: return memory area copied in @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];
	return (dest);
}
