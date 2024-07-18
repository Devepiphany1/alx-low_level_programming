#include "search_algos.h"

/**
 * linear_search - This searche for a value in an array
 * @array:points to the 1st object of the array when searched.
 * @size: no of elements in the var.
 * @value: This is the value to search.
 *
 * Return: NULL, -1 if present.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a;

	/* Checks if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Checks each element of the array */
	for (a = 0; a < size; a++)
	{
		/* Print the value */
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);

		/* If the value is found */
		if (array[a] == value)

			/* Return the index of the value */
			return (a);
	}

	/* Value not found, return -1 */
	return (-1);
}
