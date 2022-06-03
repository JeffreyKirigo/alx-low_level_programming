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

	printf("Size of a char: %lu byte(s)\n
		Size of an int: %lu byte(s)\n
		Size of a long int: %lu byte(s)\n
		Size of a long long int: %lu byte(s)\n
		Size of a float: %lu byte(s)\n", sizeof(char),
		sizeof(int), sizeof(long_int), sizeof(long_l_int), sizeof(float));
	return (0);
}
