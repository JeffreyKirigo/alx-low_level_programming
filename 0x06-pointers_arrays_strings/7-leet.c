#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * Return: char encoded in 1337
 */
char *leet(char *str)
{
	int count, i;

	char lower[] = {'a', 'e', 'o', 't', 'l'};

	char upper[] = {'A', 'E', 'O', 'T', 'L'};

	int number[] = {52, 51, 48, 55, 49};

	while (str[count] != '\0')
	{
		i = 0;
		while (i < 5)
		{
			if (str[count] == lower[i] || str[count] == upper[i])
			{
				str[count] =  number[i];
				break;
			}
		i++;
		}
		count++;
	}
	return (str);
}
