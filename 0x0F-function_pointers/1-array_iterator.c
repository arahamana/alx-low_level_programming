#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints an array of elements
 * @array: array variable name
 * @size: how many elements to print
 * @action: pointer to print in regular or hexadecimal
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
