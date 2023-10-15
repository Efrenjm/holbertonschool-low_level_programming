#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int size_char = sizeof(char);
int size_int = sizeof(int);
int size_long = sizeof(long int);
int size_long_long = sizeof(long long int);
int size_float = sizeof(float);

printf("Size of a char: %ld byte(s)\n", size_char);
printf("Size of an int: %ld byte(s)\n", size_int);
printf("Size of a long int: %ld byte(s)\n", size_long);
printf("Size of a long long int: %ld byte(s)\n", size_long_long);
printf("Size of a float: %ld byte(s)\n", size_float);
return (0);
}
