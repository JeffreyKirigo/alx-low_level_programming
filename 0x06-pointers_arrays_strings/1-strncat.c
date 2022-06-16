#include "main.h"

/**
 * _strncat - concates two strings with n bytes
 * @dest: Input string 1
 * @src: Input string 2
 * @n: no. of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
	}
	return (dest);
}
