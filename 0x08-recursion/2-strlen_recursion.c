#include "main.h"

/**
  * _strlen_recursion - fxt execusion
  *
  * @s: Fxt function
  *
  * Return: 0
  */
int _strlen_recursion(char *s)
{
	int epip = 0;

	if (*s)
	{
	epip++;
	epip += _strlen_recursion(s + 1);
	}
	return (epip);
}
