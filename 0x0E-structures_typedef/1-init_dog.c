#include <stdlib.h>
#include "dog.h"

/**
* init_dog - a function that initialize a variable of type struct dog
* @d: struct to initialize
* @name: Name of the dog
* @age: Age of the dog
* @owner: Dog owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
