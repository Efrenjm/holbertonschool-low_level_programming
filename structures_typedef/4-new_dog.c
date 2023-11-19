#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - new constructor
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: none
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (name == NULL || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = strdup(name);
	newDog->owner = strdup(owner);

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}
	newDog->age = age;

	return (newDog);
}
