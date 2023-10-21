#include "main.h"
/**
 * times_table - print table 10 x 10
 * main - code
 *
 */
void times_table(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c == 0 && b == 0)
				_putchar(c + 48);
			else if (c > 9)
			{
				d = c % 10;
				c /= 10;
				_putchar(44);
				_putchar(32);
				_putchar(c + 48);
				_putchar(d + 48);
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(c + 48);
			}
		}
		_putchar(10);
	}
}
