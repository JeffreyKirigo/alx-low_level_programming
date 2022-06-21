#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonols of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the square matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, left = 0, right = 0;

	for (i = 0; i < size; i++)
	{
		left += *(a + (size * i + i));
		right += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", left);
	printf("%d\n", right);
}
