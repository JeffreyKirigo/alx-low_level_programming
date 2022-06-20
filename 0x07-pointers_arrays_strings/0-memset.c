#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer param
 * @b: byte filled
 * @n: size of bytes
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
