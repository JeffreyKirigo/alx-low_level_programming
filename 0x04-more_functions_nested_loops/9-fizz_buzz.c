#include <stdio.h>

/**
 * main - prints 0 to 100
 * Return: 0 Success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 15 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	return (0);
}
