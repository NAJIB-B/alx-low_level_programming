#include <stddef.h>
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
	dog_t dog;
	dog_t *dog_ptr;

	dog_ptr = &dog;
	if (name == NULL)
		return (NULL);
	else
		dog.name = name;
	dog.age = age;

	if (owner == NULL)
		return (NULL);
	else
		dog.owner = owner;

	return (dog_ptr);
}
