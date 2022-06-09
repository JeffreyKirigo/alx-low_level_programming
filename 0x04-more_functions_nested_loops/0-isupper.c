#include "main.h"

/**
 * _isupper - checks if c is upper or not
 * @c: value parameter to be checked
 * Return: 1 if c is upper else 0
 */
int _isupper(int c)
{
	char uppercase;

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		c = 0;

		if (c == uppercase)
		{
			c = 1;
			break;
		}
	}
	return (c);
