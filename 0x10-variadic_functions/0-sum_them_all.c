#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Entry point
 *
 * Description: write a function that returns the sum of all its parameters
 * @n: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(va, int);
	}
	va_end(va);
	return (sum);
}
