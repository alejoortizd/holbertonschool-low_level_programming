#include "holberton.c"
#include <stdlib.h>
/**
 * array_range - Entry point
 * Description: function that make an array
 * @min: parametre to check
 * @max: parametre to check
 * Return: ptr
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min) + 1);
	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
}
