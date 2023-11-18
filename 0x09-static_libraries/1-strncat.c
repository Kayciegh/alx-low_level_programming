#include "main.h"
/**
 *_strncat - function concatenates two strings but use n bytes from @src
 *@dest: String to be extended with
 *@src: String to be appended at the end of @dest
 *@n:integer parameter
 *Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int c;
	int d;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	d = 0;
	while (d < n && src[d] !='\0')
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
       return (dest);	
}
