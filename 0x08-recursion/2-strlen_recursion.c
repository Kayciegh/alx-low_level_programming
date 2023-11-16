#include "main.h"

/**
 * _strlen_recursion - size
 * @s: function parameter 
 * Return: a string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	{
		return (0);
	}
}
