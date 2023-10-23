#include "main.h"
/**
 * print_square - print square
 * @n: size of square
 */
void print_square(int n)
{
int x;
int y;
if (n <= 0)
{
	_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
for (y = 0; y < n; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
