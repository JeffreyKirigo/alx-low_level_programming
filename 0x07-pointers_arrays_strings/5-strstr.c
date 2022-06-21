#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search for needle
 * @needle: substring to find in haystack
 * Return: pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0, j = 0;

	while (*(haystack + i))
	{
		while ((*(needle + j)) && (*(haystack + i) == *(needle + 0)))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return ('\0');
}
