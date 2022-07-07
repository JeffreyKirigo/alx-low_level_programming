#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters
 * @n: first parameter
 * Return: Return sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum  = 0, i = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
