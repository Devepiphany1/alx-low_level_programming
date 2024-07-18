#include "search_algos.h"

/**
  * binary_search - Using binary search this searches for a value in a sorted array
  *                 of integers.
  * @array: points to the 1st element of the array when search.
  * @size: The no of elements in the array.
  * @value: prints the value to search.
  *
  * Return: When present NULL, -1.
  *
  * Description: After each change Prints the array(sub) being searched.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t a, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (a = left; a < right; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[a]);

		a = left + (right - left) / 2;
		if (array[a] == value)
			return (a);
		if (array[a] > value)
			right = a - 1;
		else
			left = a + 1;
	}

	return (-1);
}
