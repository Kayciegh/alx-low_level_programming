#include "main.h"

/**
 * _isdigit - Checks for numbers
 * @c: character to be checked
 * Return: 1 if it is the given value Otherwise return 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
