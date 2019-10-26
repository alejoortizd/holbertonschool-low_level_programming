#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *
 *
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist, v1;
	unsigned int i;

	va_start(valist, n);
	va_copy (v1, valist);

	for (i = 0; i < n; i++)
	{
		if (va_arg(v1, char *) == NULL)
		{
			printf("nil");
			va_arg(valist, char *);
		}
		else
			printf("%s", va_arg(valist, char *));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(valist);
	va_end(v1);
	printf("\n");
}
