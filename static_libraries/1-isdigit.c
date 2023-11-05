#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: variable or digit
 * main - code
 * Return: checks
 */
int _isdigit(int c)
{
int i;
if (c >= '0' && c <= '9')
{
i = 1;
}
else
{
i = 0;
}
return (i);
}
