#include "function_pointers.h"

/**
 * int_index - searches for an index return index place if...
 * @array: array variable
 * @size: number of elements in array
 * @cmp: pointer of func to be used to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
