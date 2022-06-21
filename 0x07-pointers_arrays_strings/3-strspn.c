#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string where to look
 * @accept: pointer to substring of accepted characters
 * Return: size of expected occurence of the substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	int j;

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
			j++;
		}
		if (!(*(accept + j)))
		{
			break;
		}
		i++;
	}
	return (i);
}
