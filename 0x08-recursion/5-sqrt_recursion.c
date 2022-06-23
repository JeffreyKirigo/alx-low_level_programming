#include "main.h"

/**
 * is_sqrt - checks for the square root of c
 * @x: guess sqrt
 * @y: number to find sqrt of
 * Return: -1 or sqrt of y
 */
int is_sqrt(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (is_sqrt(1 + x, y));
}
/**
 * _sqrt_recursion - gives natural square root of a number
 * @n: input to find square root of
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (is_sqrt(1, n));
}
