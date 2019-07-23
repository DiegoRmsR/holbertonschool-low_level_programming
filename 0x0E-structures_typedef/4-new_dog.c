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
	dog_t *p;
	int i, j, s;

	p = malloc(sizeof(dog_t));
	if (!p)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	p->name = malloc(sizeof(char) * (i + 1));
	if (!p->name)
	{
		free(p);
		return (NULL);
	}
	for (s = 0; s <= i; s++)
		p->name[s] = name[s];
	p->owner = malloc(sizeof(char) * (j + 1));
	if (!p->owner)
	{
		free(p);
		free(p->name);
		return (NULL);
	}
	for (s = 0; s <= j; s++)
		p->owner[s] = owner[s];
	p->age = age;
	return (p);
}
