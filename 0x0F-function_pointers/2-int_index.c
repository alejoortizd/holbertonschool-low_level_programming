#include "function_pointer.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - Entry Point
 * @array: parametre to check
 * @size: parametre to check
 * @cmp: parametre to check
 * Return: -1, 1 or i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
	return (-1);
}
