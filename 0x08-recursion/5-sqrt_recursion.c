#include "holberton.h"
int check(int n, int i);
/**
 * _sqrt_recursion - Entry point
 * Description: function that returns the square of n number
 * @n: Is the parameter to checked
 * Return: -1 or i
 */
int _sqrt_recursion(int n)
{
	return (check(n, 0));
}

/**
 * check - Entry point
 * Description: Function that
 * @n: Is the parameter to checked
 * @i: Is the parameter to increase
 * Return: Always (0) success
 */
int check(int n, int i)
{
	if (n <= 0 || n < i)
		return (-1);
	if (n == i * i)
		return (i);
	return (check(n, i + 1));
}
