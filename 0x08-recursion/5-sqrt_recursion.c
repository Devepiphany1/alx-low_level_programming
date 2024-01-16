#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a num
 *
 * Return: square root of num
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * @x: cal num of square roots
 * @y: factorial
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int x, int y)
{
	if (y * y > x)
	return (-1);
	if (y * y == x)
	return (y);
return (actual_sqrt_recursion(x, y + 1));
}

