#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments to the reciever
 * @argc: arguments numbers
 * @argv: argument arrays
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int z;

	for (z = 0; z < argc; z++)
		printf("%s\n", argv[z]);

	return (0);
}
