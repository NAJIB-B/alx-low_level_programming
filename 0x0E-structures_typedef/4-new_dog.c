#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog or null if error occur
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr = malloc(sizeof(dog_t));

	if (dog_ptr == NULL)
	{
		return (NULL);
	}


	dog_ptr->name = strdup(name);
	dog_ptr->owner = strdup(owner);
	if (dog_ptr->name == NULL || dog_ptr->owner == NULL)
	{
		free(dog_ptr->name);
		free(dog_ptr->owner);
		free(dog_ptr);
		return (NULL);
	}
	dog_ptr->age = age;

	return (dog_ptr);

}
