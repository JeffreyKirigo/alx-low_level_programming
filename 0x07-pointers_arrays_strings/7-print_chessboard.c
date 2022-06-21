#include "main.h"

/**
 * print_chessboard - prints a chessboard 8 by 8
 * @a: pointer what to print
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
