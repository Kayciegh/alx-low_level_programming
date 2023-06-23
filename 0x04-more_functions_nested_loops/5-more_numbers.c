#include "main.h"
#include <stdio.h>

/**
 * more_numbers-function to print a seaurnce of numbers ten times
 */

void more_numbers(void)
{
	int k, p;

	for (p = 1; p <= 10; p++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
				putchar((k / 10) + '0');
			putchar((k % 10) + '0');
		}
		putchar('\n');
	}
}
