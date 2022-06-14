#include "main.h"

/**
 * print_rev - prints a reversed string
 * @s: string passed on to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] > 0)
	{
		len++;
	}
	len--;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
