#include <stdio.h>

/**
 * main - entry of the program
 * Return: 0 Success
 */

int main(void)
{
	long int number = 612852475143;

	long int primenumber;

	for (primenumber = 2; primenumber < number; primenumber++)
	{
		if (number % primenumber == 0)
		{
			number = number / primenumber;
		}
	}
	printf("%ld\n", primenumber);
	return (0);
}
