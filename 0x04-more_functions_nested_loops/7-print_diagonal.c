#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal
 * @n: number of times to print
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;

	if (n > 0)
	{
		while (n > i)
		{
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
	_putchar('\n');
}
