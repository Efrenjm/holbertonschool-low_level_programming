#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: number of parameters
 * @argv: parameters
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum, num, i, j;
	char *arg;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		num = atoi(arg);

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
