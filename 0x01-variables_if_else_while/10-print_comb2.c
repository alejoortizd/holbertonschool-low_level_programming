#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 48;
int b = 48;

while (a <58 && b <58)
{
	putchar(a);
	putchar(b);
	if(a <57 || b < 57)
	{
		putchar(',');
		putchar(' ');
		if (b < 57)
		{
			b++;
		}
		else
		{
		a++;
		b = 48;
		}
	}
	else
	{
		a++;
		b++;
		putchar('\n');
	}
}
return (0);
}
