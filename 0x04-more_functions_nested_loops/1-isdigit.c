#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check for a digit
 * @c: interger
 *
 * Return: 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
