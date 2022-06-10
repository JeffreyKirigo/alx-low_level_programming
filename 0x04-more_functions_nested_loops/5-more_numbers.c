#include "main.h"

/**
 * print_numbers - prints 0 to 9
 * Return: void
 */
void more_numbers(void)
{
	int start;

	int count;

	for (count = 0; count <= 14; count++)
	{
		for (start  = '0'; start <= '9'; start++)
			_putchar(start);
	_putchar('\n');
	}
}
