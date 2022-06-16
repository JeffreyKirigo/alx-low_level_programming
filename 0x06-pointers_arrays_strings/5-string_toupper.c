#include "main.h"

/**
 * string_toupper - changes a all lowercase characters to uppercase
 * @c: string to convert
 * Return: char
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
		i++;
	}
	return (c);
}
