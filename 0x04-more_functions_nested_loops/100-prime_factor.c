#include <stdio.h>
#include "main.h"

/**
 * main - entry of the program
 * Return: 0 Success
 */

int prime_numbers(int number)
{
	
	int primenumber;

	for (primenumber = 2; primenumber <= number; primenumber++)
	{
		if (primenumber % 1 == 0 && primenumber % primenumber == 0)
		{
			printf("%d, ",primenumber);
		}
	}
	return (0);
}
