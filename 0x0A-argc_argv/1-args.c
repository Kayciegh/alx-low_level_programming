#include <stdio.h>
#include "main.h"

/**
 * main - this prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: arguments arrays
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
