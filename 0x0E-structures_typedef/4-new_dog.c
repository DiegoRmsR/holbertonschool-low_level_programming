#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Print new pointer
 * @name: Store name of the string
 * @age: Store the age
 * @owner: Store the owner in string
 * Return: Pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, j, s;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	d->name = malloc(sizeof(char) * (i + 1));
	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	for (s = 0; s <= i; s++)
		d->name[s] = name[s];
	d->owner = malloc(sizeof(char) * (j + 1));
	if (!d->owner)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	for (s = 0; s <= j; s++)
		d->owner[s] = owner[s];
	d->age = age;
	return (d);
}
