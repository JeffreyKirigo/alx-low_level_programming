#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: parameter containing character to be checked
 *
 * Return: 0 Success
 */

int _isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}
