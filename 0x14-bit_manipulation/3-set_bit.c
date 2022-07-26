#include "main.h"

/**
 * set_bit - sets value of a bit
 * @n: unsigned long int
 * @index: position to set value at
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index < 63)
	{
		i = 1 << index;
		*n = (*n | i);
		return (1);
	}
	else
		return (-1);
}
