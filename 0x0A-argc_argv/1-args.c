#include "main.h"
#include <stdio.h>

/**
 * main - prints the file name
 * @argc: argument count
 * @argv: argument array
 * Return: 0 success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc);
	return (0);
}
