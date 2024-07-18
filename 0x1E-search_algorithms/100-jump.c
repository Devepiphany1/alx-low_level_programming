#include "search_algos.h"
/**
  * jump_search - Using jump search to searche for a value in a sorted array.
  * @array: Pointes to the 1st element of the array.
  * @size: No of elements in the array.
  * @value: The value to be searched.
  *
  * Return: If the value is not present or the array is NULL, -1.
  */

int jump_search(int *array, size_t size, int value)
{
	size_t a, jump, step;

	/* Checks if the array is NULL */
	if (array == NULL || size == 0)
		return (-1);

	/* Calculate the size of jump step */
	step = sqrt(size);

	/* Perform the jump search */
	for (a = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);

		/* Store the previous jump position */
		a = jump;

		/* Update the jump position */
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a, jump);

	/* Adjust jump position */
	jump = jump < size - 1 ? jump : size - 1;

	/* Perform a linear search*/
	for (; a < jump && array[a] < value; a++)
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);

	printf("Value checked array[%ld] = [%d]\n", a, array[a]);

	/* Checks if the value is found and return the corresponding index */
	return (array[a] == value ? (int)a : -1);
}
