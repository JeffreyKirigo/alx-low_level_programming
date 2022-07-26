#include "main.h"

/**
 * clear_bit - set bit to 0
 * @n: pointer to int
 * @index: position of bit
 * Return: 1 success -1 failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index <= 63)
	{
		i = 1 << index;
		if (*n & i)
			*n ^= i;
		return (1);
	}
	else
		return (-1);
}
