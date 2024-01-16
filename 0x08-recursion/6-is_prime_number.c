#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - int prime num
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int x, int y)
{
	if (y == 1)
	return (1);
	if (y % y == 0 && y > 0)
	return (0);
	return (actual_prime(x, y - 1));
}
