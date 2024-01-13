#include "main.h"
/**
 * _strlen - returns the length of a string
 * @x: string
 * Return: length
 */
int _strlen(char *x)
{
	int longi = 0;

	while (*x != '\0')
	{
	longi++;
	x++;
	}

return (longi);
}
