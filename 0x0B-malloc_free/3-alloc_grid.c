/*
 * File: 3-alloc_grid.c
 * Author: TobiLight
*/

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 *              array of integers
 * @width: width of grid
 * @height: height of grid
 *
 * Return: Pointer to an array or NULL
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0, k = 0;

	/* return null if width or height is less than 0 */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate space for our pointer to pointer of integer */
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	/* Allocate memory for each row */
	while (i < height)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		/* Check if grid is null */
		if (grid[i] == NULL)
		{
			/* free up memory */
			while (j < width)
			{
				free(grid[j]);
				j++;
			}
			free(grid);
			return (NULL);
		}
		while (k < width)
		{
			grid[i][k] = 0;
			k++;
		}
		i++;
	}

	return (grid);
}
