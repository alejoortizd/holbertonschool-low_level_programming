#include "search_algos.h"

/**
 * linear_search - entry point
 * @array: parameter to be check
 * @size: parameter to be check
 * @value: parameter to be check
 * Description: Write a function that searches for a value in an array
 * Return: a value
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
