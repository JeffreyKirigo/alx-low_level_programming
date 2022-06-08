#include "main.h"

/**
 * print_sign - prints the sign a number n
 *
 * @n: number to be checked for sign
 *
 * Return: 0 Success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);	
}
