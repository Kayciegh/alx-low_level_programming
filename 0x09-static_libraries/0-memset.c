#include "main.h"
/**
*_memset - The _memset() function fills a block of memory with a value
*@s:target
*@b: desired value
*@n:number of bytes
*Return: returns new value of target
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
