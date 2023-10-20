#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
		{
		}
		else
			putc(i, stdout);
	}
	putc(10, stdout);
	return (0);
}
