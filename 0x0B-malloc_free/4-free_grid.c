/*
 * file: 4-free_grid.c
 * Auth: kelechi nnadi <@alx swe>
 */
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously
 *             created by you alloc_grid function
 * @grid: the pointer to the privous greed
 * @height: is the height of the greed
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;
	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
