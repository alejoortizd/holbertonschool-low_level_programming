#include "holberton.h"
#include <stdio.h>
/**
 * *leet - Entry point
 *
 * Description: write a function that encodes a string into 1337
 * @enc: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
char *leet(char *enc)
{
	int h;
	char s[] = {97, 101, 111, 116, 108};
	char num[] = {52, 51, 48, 55, 49};
	int j;

	for (h = 0; enc[h] != '\0'; h++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (enc[h] == s[j] || (enc[h] == (s[j] - 32)))
				enc[h] = num[j];
		}
	}
	return (enc);
}
