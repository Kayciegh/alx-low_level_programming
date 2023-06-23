#include "main.h"
#include <stdio.h>

/**
 * * print_line - print number of lines
 * @n:integer parameter
 */

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int k;

		for (k = 1; k <= n; k++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
