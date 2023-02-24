#include "main.h"

/**
 * more_numbers - prints 10 times the number from 0 to 14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int n, print;

	for (print = 0; print <= 9; print++)
	{
	for (n = 0; n <= 14; n++)
	{
		if (n > 9)
		{
			_putchar((n / 10) + '0');
		}
		_putchar((n % 10) + '0');
	}
		_putchar('\n');
	}
}
