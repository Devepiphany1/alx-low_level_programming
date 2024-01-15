#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **epip;
	int ag, gb;

	if (width <= 0 || height <= 0)
	return (NULL);
	epip = malloc(sizeof(int *) * height);

	if (epip == NULL)

	return (NULL);
	for (ag = 0; ag < height; ag++)
	{
	epip[ag] = malloc(sizeof(int) * width);
	if (epip[ag] == NULL)
	{
	for (; ag >= 0; ag--)
	free(epip[ag]);
	free(epip);
	return (NULL);
	}
	}
	for (ag = 0; ag < height; ag++)
	{
	for (gb = 0; gb < width; gb++)
	epip[ag][gb] = 0;
	}
	return (epip);
}

