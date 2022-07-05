#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *dg;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
	{
		free(dg);
		return (NULL);
	}
	(*dg).name = malloc(i * sizeof((*dg).name));
	if ((*dg).name == NULL)
	{
		free((*dg).name);
		free(dg);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		(*dg).name[k] = name[k];
	(*dg).age = age;
	(*dg).owner = malloc(j * sizeof((*dg).owner));
	if ((*dg).owner == NULL)
	{
		free((*dg).owner);
		free((*dg).name);
		free(dg);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		(*dg).owner[k] = owner[k];
	return (dg);
}
