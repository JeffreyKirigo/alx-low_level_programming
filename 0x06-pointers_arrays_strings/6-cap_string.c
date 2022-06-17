#include "main.h"

/**
 * cap_string - Capitalizes all the word of a string
 * @str: Input string
 * Return: Char string
 */
char *cap_string(char *str)
{
	int count, i;

	int delim[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	count = 0;

	if ((str[count] >= 97) && (str[count] <= 122))
		str[count] = str[count] - 32;
	count++;

	while (str[count] != '\0')
	{
		i = 0;

		while (i < 13)
		{
			if (str[count] == delim[i])
				if ((str[count + 1] >= 97) && (str[count + 1] <= 122))
				{
					str[count + 1] = str[count + 1] - 32;
					break;
				}
			i++;
		}
		count++;
	}
	return (str);
}
