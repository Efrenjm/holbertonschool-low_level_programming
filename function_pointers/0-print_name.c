#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function print name
 * @name: pointer to name
 * @f: pointer to function
 * Return: NULL
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
