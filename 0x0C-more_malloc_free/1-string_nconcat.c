#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concats two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: size
 * Return: char concated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *conc;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n > len2)
	n = len2;
	conc = malloc((len1 + n + 1) * sizeof(char));

	if (conc == NULL)
		return (0);

	for (i = 0; i < len1; i++)
	{
		conc[i] = s1[i];
	}

	for (; i < (len1 + n); i++)
	{
		conc[i] = s2[i - len1];
	}
	conc[i] = '\0';

return (conc);
}
