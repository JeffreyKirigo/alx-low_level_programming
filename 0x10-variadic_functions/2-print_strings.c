#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @n: number of strings passed
 * @separator: string to be printed between the strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;

	va_start(ap, n);

	while (i < n)
	{
		str = va_arg(ap, char*);

		if (!str)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
