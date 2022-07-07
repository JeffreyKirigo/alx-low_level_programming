#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function
 * @array: pointer to an int array
 * @size: soze of array
 * @action: pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		unsigned int i = 0;

		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
