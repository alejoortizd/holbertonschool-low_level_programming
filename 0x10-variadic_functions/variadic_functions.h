#ifndef _SUM_
#define _SUM_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int _putchar(char *);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct fun - Entry Point
 * @op: parametre to check
 * @f: parametre to check
 */
typedef struct fun
{
	char *op;
	void (*f)(va_list);
} fun_t;
#endif
