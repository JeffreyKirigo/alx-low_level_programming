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

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	putchar('\n');
	return (0);

}
