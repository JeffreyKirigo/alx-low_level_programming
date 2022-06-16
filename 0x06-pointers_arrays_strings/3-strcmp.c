#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: String 1
 * @s2: String 2
 * Return: 0 Success
 */
int _strcmp(char *s1, char *s2)
{
	int flag, i;

	i = 0, flag = 0;

	while ((*(s1 + i)) != '\0' && (*(s2 + i)) != '\0')
	{
		if (s1[i] != s2[i])
		{
			flag = *(s1 + i) - *(s2 + i);
			break;
		}
		else
			flag = 0;
		i++;
	}
	return (flag);
}
