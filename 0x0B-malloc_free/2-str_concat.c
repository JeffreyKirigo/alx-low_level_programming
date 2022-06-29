#include "main.h"
#include <stdlib.h>
/**
 * _strlen - gets length of a string
 * @s: input type pointer to char
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * str_concat - concat 2 strings
 * @s1: input string
 * @s2: input string
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, len_full;

	char *temp, *fin;

	if (!s1)
		s1 = "";
	else if (!s2)
		s2 = "";
	else
	{
		len1 = _strlen(s1);
		len2 = _strlen(s2);
	}

	len_full = len1 + len2 + 1;

	fin = malloc(sizeof(char) * (len_full));

	if (!fin)
		return (0);

	temp = fin;

	while (*s1)
		*temp++ = *s1++;
	while ((*temp++ = *s2++))
		;
	return (fin);
}
