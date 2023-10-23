#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: variable or character
 * main - code
 * Return: 0
 */
int _isupper(int c)
{
int i;
if (c >= 'A' && c <= 'Z')
{
i = 1;
}
else
{
i = 0;
}
return (i);
}
