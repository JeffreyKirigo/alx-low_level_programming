#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long int long_l_int;
	long int long_int;

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long_int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long_l_int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
