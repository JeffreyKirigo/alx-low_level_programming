#include "main.h"
#include <stdio.h>

/**
 * main - prints the file name
 * @argc: argument count
 * @argv: argument array
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[0]);
		i++;
	}
	return (0);
}
