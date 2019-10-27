#include "variadic_functions.h"
/**
 * sum_them_all - function
 * @n: int parameters to sum
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	double sum = 0.0;
	unsigned int k;

	if (n == 0)
		return (0);

	va_start(valist, n);
	for (k = 0; k < n; k++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
