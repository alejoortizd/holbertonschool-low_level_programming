#include "holberton.h"
/**
 * is_prime_number - Entry point
 * Description: Function that return the value of X raised Y
 * @x: Parametre to raise
 * @y: parametre to check
 * Return: a number raise Y times
 */
int is_prime_number(int n)
{
	return (check(n, 2));
}
/**
 * check - function that check is the n number is prime
 * Description: function that make a check
 * @i: parametre to validate is the n number is prime
 * return: 0 if it isnt prime and 1 if its prime
 */
int check(int n, int i)
{
	if (n % i == 0 || n < 2)
		return (0);
	else if (i > n / 2)
		return (1);
	return (check(n, i + 1));
}
