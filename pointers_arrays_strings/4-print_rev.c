#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - prints a string in reverse
 * @s: the string to be reversed
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len, end, i;
	char temp;

	len = strlen(s);
	end = len - 1;
	for (i = 0; i < end; i++)
	{
		temp = s[i];
		s[i] = s[end];
		s[end] = temp;
		end--;
	}
}
