#include "search_algos.h"

/**
 * linear_skip - Using Linear skip searches for a value in a sorted singly linked
 * @list: A pointer to the head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	/* Check if the list is NULL */
	if (list == NULL)
		return (NULL);

	/* carrys on linear skip task */
	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		/* Stores the prev jump node */
		node = jump;

		/* If the express lane is available */
		if (jump->express != NULL)
		{
			/* Jump to the next express node */
			jump = jump->express;

			printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
		}
		else
		{
			/* Traverse to the end of the list */
			while (jump->next != NULL)
				/* Move to the next node in the list */
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	/*  performs a linear search, checking each */
	/*  node's value to find the target value */
	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
