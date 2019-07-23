#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Object dog
 * @age: numbers float
 * @name: pointer char name
 * @owner: pointer char
*/
struct dog
typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
