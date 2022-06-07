#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int printtimes = 0;

	char alphy = 'a';

	while (printtimes < 10)
	{
		while (alphy < 'z')
		{
			_putchar(alphy);
			alphy++;
		}
		_putchar('\n');
		printtimes++;
	}
}
