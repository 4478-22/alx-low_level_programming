#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *nameCopy;
	char *ownerCopy;

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	return (NULL);

	nameCopy = strdup(name);

	if (nameCopy == NULL)
	{
	free(newDog);

	return (NULL);
	}

	ownerCopy = strdup(owner);

	if (ownerCopy == NULL)
	{
	free(nameCopy);

	free(newDog);

	return (NULL);
	}

	newDog->age = age;

	newDog->name = nameCopy;

	newDog->owner = ownerCopy;

	return (newDog);
}
