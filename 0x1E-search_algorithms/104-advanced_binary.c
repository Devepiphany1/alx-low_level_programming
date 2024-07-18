
#include "search_algos.h"

/**
 * advanced_binary_recursive - Using Binary search this searches recursively for a value in a sorted array of integers.
 * @array: Points to the first element of the [sub]array.
 * @left: The starting index.
 * @right: The ending index.
 * @value: The value of search.
 * Return: If the value is not present, -1.
 * Description: Prints the [sub]array.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t a;

	/* If the right is less than the left */
	if (right < left)
		/* return -1 if value not found,  */
		return (-1);

	printf("Searching in array: ");

	/* Print the [sub]array being searched */
	for (a = left; a < right; a++)

		printf("%d, ", array[a]);

	printf("%d\n", array[a]);
	/* Calculate the middle index */
	a = left + (right - left) / 2;

	/* If the middle element is the value */
	if (array[a] == value && (a == left || array[a - 1] != value))
		/* Return the index */
		return (a);

	/* If the middle element is >= to the value */
	if (array[a] >= value)
		/* Recursively search the left subarray */
		return (advanced_binary_recursive(array, left, a, value));
	/* Recursively search the right subarray */
	return (advanced_binary_recursive(array, a + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array
 *                   of integers using advanced binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 */

int advanced_binary(int *array, size_t size, int value)
{
	/* Check if the array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);
	/* Call the recursive function */
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
