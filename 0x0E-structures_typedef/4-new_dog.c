#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog.
 * @name: new name
 * @age: new age
 * @owner: new owner
 * Return: ptr to new dog info.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, j;

	i = strlen(name);
	j = strlen(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (i + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (j + 1));

	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
