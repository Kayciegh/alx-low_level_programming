#include "main.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase
 *
 * main - print 1 if c is uppercase
 * @c: interger
 * Return: 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
