#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: is a character
 * Return: 0 (Success)
 */
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
