#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	unsigned int len1, len2, k, limit, full_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	full_len = len1 + len2 + 1;

	conc = malloc(sizeof(char) * full_len);

	if (conc == NULL)
	{
		free(conc);
		return (NULL);
	}

	for (k = 0; k < len1; k++)
		conc[k] = s1[k];

	limit = len2;
	for (len2 = 0; len2 <= limit; k++, len2++)
		conc[k] = s2[len2];

	return (conc);
}
