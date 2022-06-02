#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n
			Size of int: %d byte(s)\n
			Size of long int: %d byte(s)\n
			Size of long long int: %d byte(s)\n
			Size of float: %d byte(s)",sizeOf(char),
			sizeOf(int),
			sizeOf(long int),
			sizeOf(long long int),
			sizeOf(float));
    return (0);
}
