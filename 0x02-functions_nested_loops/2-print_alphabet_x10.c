#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int printtimes = 0;

	while (printtimes < 10)
	{
		print_alphabet();
		printtimes++;
	}
	_putchar('\n');
}
