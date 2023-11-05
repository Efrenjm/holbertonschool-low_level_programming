#include "main.h"

/**
 * find_sqrt - find the natural square root
 * @n: number
 * @guess: the natural number that could be the root
 * Return: natural root or -1.
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (find_sqrt(n, guess + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural root or -1.
 */

int _sqrt_recursion(int n)
{
        if (n < 0)
                return (-1);
        if (n == 0 || n == 1)
                return (n);
        return (find_sqrt(n, 1));
}
