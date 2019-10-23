#include "function_pointers.h"
/**
 * print-name - Entry point
 * Description: function that return name
 * @name: parametre to check
 * @f: parametre to check
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{

if (name == NULL || f == NULL)
	return;
f(name);
}
