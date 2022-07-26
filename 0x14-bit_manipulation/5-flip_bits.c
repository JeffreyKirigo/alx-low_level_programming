#include "main.h"

/**
 * flip_bits - flip bit to get one number to another
 * @n: number
 * @m: unsigned long int
 * Return: flipped bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;

	for (bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits++;
	}
	return (bits);
}
