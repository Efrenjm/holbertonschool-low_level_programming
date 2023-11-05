#include <stdio.h>
/**
 * main - prints the name of the function
 * @argc: number of parameters
 * @argv: parameters
 * Return: 0
 */
int main(int argc, char *argv[]) {
    if (argc > 0) {
        printf("%s\n", argv[0]);
    }

    return 0;
}
