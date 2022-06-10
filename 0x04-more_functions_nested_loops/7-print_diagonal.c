#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal
 * @n: number of times to print
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	int j;

	i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			while (j < i)
			{
				j = 0;
				_putchar(' ');
				j++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
	else
	_putchar('\n');
}
