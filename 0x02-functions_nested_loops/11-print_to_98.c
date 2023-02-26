#include <stdio.h>
/**
 * print_to_98.c - list all natural numbers from n to 98
 * Return: Always 0
 */
void print_to_98(int n)
{
	int i, sum = 0;

	for (i = 0; i <= 98; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
		return (0);
}
