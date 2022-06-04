#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* more headers go there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	char str;

	for (number = 48; number <= 57; number++)
		putchar(number);
	for (str = 'a' ; str <= 'f'; str++)
		putchar(str);
	putchar('\n');
	return (0);

}
