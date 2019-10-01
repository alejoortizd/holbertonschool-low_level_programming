#include "holberton.h"
/**
 * swap_int - Entry point
 * Description: swaps the values of two integers
 * @a: parametre to check
 * @b: parametre to check
 * Return: void
 */
void swap_int(int *a, int *b)
{

	int t;

	t = *a;
	*a = *b;
	*b = t;
}
