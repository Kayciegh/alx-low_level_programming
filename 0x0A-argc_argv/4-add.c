#include <stdio.h>
#include "main.h"

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument arrays
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int z, y, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (z = 1; argv[z]; z++)
	{
		y = strtol(argv[z], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += y;
		}
	}
	printf("%d\n", sum);

	return (0);
}
