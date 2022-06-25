#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the file name
 * @argc: argument count
 * @argv: argument array
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i = 1, j = 0, sum = 0;

	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
