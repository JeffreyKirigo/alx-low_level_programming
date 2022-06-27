#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: set size of memory
 * @c: store the array
 * Return: char array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *ptr;

	if (size == 0)
		return (0);
	ptr = malloc(sizeof(char) * (size));
	if (ptr == NULL)
		return (0);
	for (; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
