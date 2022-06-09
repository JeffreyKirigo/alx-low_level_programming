#include "main.h"

/**
 * _isupper - checks if c is upper or not
 * @c: value parameter to be checked
 * Return: 1 if c is upper else 0
 */
int _isupper(int c)
{
	char uppercase;

	bool isupper = false;

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{

		if (c == uppercase)
		{
			isupper = true;
			return (1);
		}
	}
	return (0);
