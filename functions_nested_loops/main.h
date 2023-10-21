#include <stdio.h>
#include <stdlib.h>

/* more headers goes there */
/* betty style doc for function main goes there */

/**
 * print_alphabet - prints the alphabet in order
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
        int i;

        for (i = 97; i < 123; i++)
        {
                putc(i, stdout);
        }
        putc(10, stdout);
        return (0);
}
