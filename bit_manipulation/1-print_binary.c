#include <stdio.h>
/*
 * print_binary - print decimal into binary form
 * n - decimal number
 * Return: none
 */
void print_binary(unsigned long int n) 
{
	if (n > 1)
        	print_binary(n >> 1);
	putchar((n & 1) ? '1' : '0');
}
