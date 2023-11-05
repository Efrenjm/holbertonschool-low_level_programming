#include <stdio.h>
/**
 * main - prints all the passed paramters including the name of the function
 * @argc: number of parameters
 * @argv: parameters
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
