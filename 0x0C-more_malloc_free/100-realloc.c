#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block using malloc and free
 * @pt: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *pt, unsigned int old_size, unsigned int new_size)
{
	char *dupl, *relloc;
	unsigned int i;

	if (pt != NULL)
	dupl = pt;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
	return (pt);
	if (new_size == 0 && pt != NULL)
	{ free(pt);
	return (0); }
	relloc = malloc(new_size);
	if (relloc == NULL)
	return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(relloc + i) = dupl[i];
	}
	free(pt);
return (relloc);
}
