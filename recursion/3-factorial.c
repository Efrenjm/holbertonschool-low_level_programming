#include "main.h"

/**
 * factorial - writes a string with recursion
 * @n: factorial number
 * Return: always 0.
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
