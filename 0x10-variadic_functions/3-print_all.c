#include "variadic_functions.h"
/**
 * p_char - Entry Point
 * @valist: parametre to check
 * Return: void
 */
void p_str(va_list valist)
{
	char *c;

	c = va_arg(valist, char *);
	if (c)
	{
		printf("%s", c);
		return;
	}
	printf("(nil)");
}
/**
 * p_char - Entry Point
 * @valist: parametre to check
 * Return: void
 */
void p_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}
/**
 * p_int - Entry Point
 * @valist: parametre to check
 * Return: void
 */
void p_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}
/**
 * p_float - Entry Point
 * @valist: parametre to check
 * Return: void
 */
void p_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
/**
 * print_all - Entry Point
 * Description: function that print
 * @format: parametre to check
 * Return: void
 */
void print_all(const char * const format, ...)
{

	va_list valist;
	unsigned int i, j;
	char *p;

	fun_t ptr[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_str},
		{NULL, NULL}
	};
	va_start(valist, format);
	i = 0;
	p = "";
	while (format && format[i] != '\0')
	{
		j = 0;
		while (ptr[j].op)
		{
			if (*(ptr[j].op) == format[i])
			{
				printf("%s", p);
				ptr[j].f(valist);
				p = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
