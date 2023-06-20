#include "dog.h"

/**
 * init_dog -  A function that initializes a dog.
 * @d: A pointer to a structure
 * @name: a pointer to the first member of struct
 * @age: a pointer to second member
 * @owner:a pointer to third member
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
