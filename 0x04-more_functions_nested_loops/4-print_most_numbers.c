#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Run numbers 0 to 9
 * do not print 2 and 4
 * Return: 0
*/

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 10; a++)
	{
		if (a != 2 && a != 4)
			putchar('0' + a);
	}
	putchar('\n');
}
