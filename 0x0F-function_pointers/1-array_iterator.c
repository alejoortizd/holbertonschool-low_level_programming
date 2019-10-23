#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - Entry Point
 * Description: function that return information
 * @array: parametre to check
 * @size: parametre to check
 * @action: paramete to check
 * Return: value and adress
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == '\0' || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
