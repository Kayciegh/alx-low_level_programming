#include "main.h"
#include <stdio.h>

/**
 * print_square - print argument in square
 * @size:measures size of the aquares
 */

void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int p, q;

		for (p = 0; p < size; p++)
		{
			for (q = 0; q < size; q++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
