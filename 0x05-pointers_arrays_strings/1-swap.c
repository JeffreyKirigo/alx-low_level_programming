#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: param to swap
 * @b: param to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
