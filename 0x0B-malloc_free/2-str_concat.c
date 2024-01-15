#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat

 * @s2: input two to concat

 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int epip, x;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	epip = x = 0;
	while (s1[epip] != '\0')
	epip++;
	while (s2[x] != '\0')
	x++;
	conct = malloc(sizeof(char) * (epip + x + 1));
	if (conct == NULL)
	return (NULL);
	epip = x = 0;
	while (s1[epip] != '\0')
	{
	conct[epip] = s1[epip];
	epip++;
	}
	while (s2[x] != '\0')
	{
	conct[epip] = s2[x];
	epip++, x++;
	}
	conct[epip] = '\0';
	return (conct);
}
