#include "dog.h"
/**
 * init_dog -  function that initialize a variable
 * struct dog - Object dog
 * @d: pointer
 * @age: numbers float
 * @name: pointer char name
 * @owner: pointer char
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
