#include <stdio.h>

/**
 * b4main - executes before main
 * Return: void
 */
void b4main() __attribute__((constructor));
void b4main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
