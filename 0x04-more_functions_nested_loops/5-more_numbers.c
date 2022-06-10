#include "main.h"

/**
 * more_numbers - prints 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int start;

	int count;

	for (count = 0; count <= 9; count++)
	{
		for (start  = 0; start <= 14; start++)
		{
			if (start >= 10)
				_putchar((start / 10) + 48);
			_putchar((start % 10) + 48);
		}
	_putchar('\n');
	}
}
