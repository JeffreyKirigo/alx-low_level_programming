#include "main.h"

/**
 * _strcat - concats two strings
 * @dest: to be concated with src
 * @src: to append to dest
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; dest[j] != '\0'; j++)
	{
		if (dest[j] == '\0')
			dest[j] = ' ';
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
