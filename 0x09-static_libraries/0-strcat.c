#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: destination string; @src is appended to it
 *@src: Source string; gets appended to @dest
 *Return: pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int z = 0;
	int y = 0;

	while (dest[z] != '\0')
		z++;

	while (src[y] != '\0')
	{
		*(dest + z) = src[y];
		y++;
		z++;
	}
}
