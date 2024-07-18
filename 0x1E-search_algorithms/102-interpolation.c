#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array.
  * @array: Points to the first element of the array to search.
  * @size: The no of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  */

int interpolation_search(int *array, size_t size, int value)
{
	size_t a, b, c;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Perform interpolation search */
	for (b = 0, c = size - 1; c >= b;)
	{
		a = b + (((double)(c - b) / (array[c] - array[b])) * (value - array[b]));
		if (a < size)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", a);
			break;
		}

		if (array[a] == value)
			return (a);
		if (array[a] > value)
			c = a - 1;
		else
			b = a + 1;
	}

	return (-1);
}
