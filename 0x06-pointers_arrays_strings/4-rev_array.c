#include "holberton.h"
/**
 * reverse_array - Entry point
 * Description: reverse
 * @a: parametre to check
 * @n: parametre to check
 *
 * Return: always w
 */
void reverse_array(int *a, int n)
{
	int i = 0, j, k;

	n--;
	while (i < n)
	{
		j = a[i];
		k = a[n];
		a[i++] = k;
		a[n--] = j;
	}
}
