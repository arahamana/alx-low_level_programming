#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: integer to swap with b
 * @b: integer to swap with a
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int m = 0;

	m = *a;
	*a = *b;
	*b = m;
}
