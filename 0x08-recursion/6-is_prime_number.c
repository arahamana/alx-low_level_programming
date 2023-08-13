#include "main.h"

int actual_prime(int n, int i);

/*
 * is_prime_number - returns 1 if input is a prime number and 0 otherwise.
 * @n - input to check.
 * return - 1 if prime and 0 id otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/*
 * actual_prime - checks if a number is prime recursively.
 * @n - variable to check
 * @i - iterator
 * return - 1 if prime and 0 otherwise.
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
