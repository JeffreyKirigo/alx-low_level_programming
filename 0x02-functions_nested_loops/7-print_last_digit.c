#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: Number to print last digit from
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
