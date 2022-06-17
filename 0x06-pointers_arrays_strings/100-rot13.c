#include "main.h"

/**
 * rot13 - encodes a  string using rot13
 * @str: Input string
 * Return: Char encoded string
 */
char *rot13(char *str)
{
	int count, i;

	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	count = 0, i = 0;

	while (str[count] != '\0')
	{
		while (i < 52)
		{
			if (str[count] == alphabet[i])
			{
				str[count] = rot13[i];
				break;
			}
			i++;
		}
		count++;
	}
	return (str);
}
