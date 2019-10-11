#include "holberton.h"
int c(char *i);
int check(char *i, int j);
/**
 * is_palindrome - Entry point
 * Description: return 1 is is palindrome
 * @s: Is the parameter to be checked
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check(s, c(s)));
}
/**
 * c - Entry point
 * Description: Copy the values
 * @i: Is the parameter to be checked
 * Return: Always (j)
 */
int c(char *i)
{
	int j = 0;

	if (*i != '\0')
	{
		j++;
		j = j + c(i + 1);
	}
	return (j);
}
/**
 * check - Entry point
 * Description: function that compare the last with the first letter
 * @i:parameter to check
 * @j:parameter to check
 * Return: 1 or 0 depend the case
 */
int check(char *i, int j)
{

	if (j >= j / 2)
	{
		if (*i == i[j - 1])
		{
			return (check(i + 1, j - 2));
		}
		else
			return (0);
	}
	return (1);
}
