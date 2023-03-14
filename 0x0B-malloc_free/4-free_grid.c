/*
 * File: 4-free_grid.c
 * Author: TobiLight
*/

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: a pointer to a pointer integer
 * @height: height of 2d array
 *
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
