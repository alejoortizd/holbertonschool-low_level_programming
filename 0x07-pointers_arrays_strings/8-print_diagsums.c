#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - Entry point
 * Description: Function that return the diagnsum
 * @size: parametre to check
 * @a: parametre to check
 * Return: printf
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int m = 0;
	int n = 0;

	for (i = 0, j = (size - 1) ; i < size ; i++, j--)
	{
		m = m + *(a + i + ((size - 1) * i) + j);
		n = n + *(a + i + ((size - 1) * i) + i);
	}
	printf("%d, %d\n", n, m);
}
