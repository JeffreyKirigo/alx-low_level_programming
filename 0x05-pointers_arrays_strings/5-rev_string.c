#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string passed on to be printed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;

	int max, half;

	char first, last;

	while (s[len] > 0)
	{
		len++;
	}
	max = len - 1;
	half = max / 2;
	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
}
