#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int epip;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (epip = 0; epip < size; epip++)
		str[epip] = c;
	return (str);
}
