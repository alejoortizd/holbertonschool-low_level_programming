#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - Entry Point
 * Description: Function that free the memory
 * @grid: parametre to check
 * @height: parametre to check
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
