#include <stdio.h>
/**
 * main - prints the name of the function
 * @argc: number of parameters
 * @argv: parameters
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
