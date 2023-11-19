#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - dog intializer.
 * @d: dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = strdup(name);
	d->owner = strdup(owner);
	d->age = age;
}
