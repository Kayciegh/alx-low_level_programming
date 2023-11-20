#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: number of arguments
 * @argv: argument arrays
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int c, d;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);
	d = atoi(argv[2]);
	printf("%d\n", c * d);

	return (0);
}
