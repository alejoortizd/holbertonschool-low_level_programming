#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h[] = "Holberton\n";
	int c = sizeof(h);
	int i = 0;

	for ( ; i < c; i++)
		_putchar(h[i]);
return (0);
}
