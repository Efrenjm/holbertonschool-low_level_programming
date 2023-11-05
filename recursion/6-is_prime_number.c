#include "main.h"

/**
 * is_prime_recursive - recursive function to check if the number is prime
 * @n: number to be tested
 * @divisor: divisor to test
 * Return: always 0.
 */

int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
		return 0;
	if (divisor == 1)
		return 1;
	if (n % divisor == 0)
		return 0;
	return is_prime_recursive(n, divisor - 1);
}

/**
 * is_prime_number - recursive function to check if the number is prime
 * @n: number to be tested
 * Return: always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return 0;
	return is_prime_recursive(n, n - 1);
}
