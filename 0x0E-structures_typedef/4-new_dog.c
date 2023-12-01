#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - a function that creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: Owner of new dog
 * Return: it returns NULL if the functions fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/*creating memory for new_dog using malloc*/
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL || new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;

	return (new_dog);
}
