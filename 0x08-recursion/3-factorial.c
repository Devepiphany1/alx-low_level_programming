#include "main.h"

/**
  * factorial - fact
  *
  * @n: fact = factorial
  *
  * Return: Function fact
  */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}

