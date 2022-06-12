#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: dimensions of triangle
 */
void print_triangle(int size)
{
	int column, row, n;

	n = size - 1;

	if (size > 0)
	{
		for (column = 0; column < size; column++)
		{
		
			for (row = 0; row < size; row++)
			{
				if (row < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
