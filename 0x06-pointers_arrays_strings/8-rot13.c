#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - Entry point
 *
 * Description: write a function that encodes a string into 1337
 * @enc: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
char *rot13(char *enc)
{
	int h;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char num[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int j;

	for (h = 0; enc[h] != '\0'; h++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (enc[h] == s[j])
			{	enc[h] = num[j];
				break;
			}
		}
	}
	return (enc);
}
