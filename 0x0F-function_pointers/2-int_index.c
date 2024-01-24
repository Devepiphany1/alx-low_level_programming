#include "function_pointers.h"
	/**
	*
	*/

	int int_index(int *array, int size, int (*cmp)(int))
	{
		int epip;


		if (array == NULL || size <= 0 || cmp == NULL)
			return (-1);


		for (epip = 0; epip < size; epip++)
		{
			if (cmp(array[epip]))
				return (epip);
		}
		return (-1);
	}
