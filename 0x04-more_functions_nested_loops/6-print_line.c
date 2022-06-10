#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to print
 * Return: void
 */
void print_line(int n)
{
	int i;

	i = 0;

	if (n > 0)
	{
		while (n > i)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
