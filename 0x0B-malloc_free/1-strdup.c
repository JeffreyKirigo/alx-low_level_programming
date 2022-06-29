#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: pointer to new string
 * Return: pointer to a new string which is a duplicate of the string str
 */
char *_strdup(char *str)
{
	int len = 0, j;

	char *cp;

	if(!str)
		return (NULL);

	while (*(str + len))
		len++;
	cp = malloc(sizeof(char) * (len + 1));

	if (cp == NULL)
		return (NULL);
	j = 0;

	while (j <= len)
	{
		cp[j] = str[j];
		j++;
	}
	return (cp);
}
