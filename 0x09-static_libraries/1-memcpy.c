#include "main.h"

/**
 * _memcpy - Copies content from memory area
 *
 * @src: copied memory area 
 *
 * @dest: stored memory area
 *
 * @n: Number of bytes
 *
 * Return: A pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);


}
