#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers from n
 * @n: starting point
 *
 *  Return: 0 Success
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98");
	_putchar('\n');
}
