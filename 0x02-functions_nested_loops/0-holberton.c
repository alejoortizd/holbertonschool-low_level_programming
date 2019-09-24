#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h[] = "Holberton";
	int c = sizeof(h);
	int i = 0;

	for ( ; i < c; i++)
		_putchar(h[i]);
	_putchar('\n');
return (0);
}
