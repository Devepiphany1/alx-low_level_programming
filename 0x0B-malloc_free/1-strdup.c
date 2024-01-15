#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int epip, r = 0;

	if (str == NULL)
	return (NULL);
	epip = 0;
	while (str[epip] != '\0')
		epip++;
	aaa = malloc(sizeof(char) * (epip + 1));
	if (aaa == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		aaa[r] = str[r];
	return (aaa);

}
