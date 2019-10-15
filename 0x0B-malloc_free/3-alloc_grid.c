#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - Entry Point
 * Description: function that print a grid
 * @width: parametre to check
 * @height: parametre to check
 * Return: IDK
 */
int **alloc_grid(int width, int height)
{

	int i, j;
	int **k;

	if (width <= 0 || height <= 0)
		return (NULL);
	k = (int **)malloc(height * sizeof(int *));
	if (k == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		k[i] = (int *)malloc(width * sizeof(int));
		if (k[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(k[j]);
			free(k);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			k[i][j] = 0;
	}
	return (k);
}
