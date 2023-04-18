#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to a newly created dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog != NULL)
	{
		dog->name = name;
		dog->age = age;
		dog->owner = owner;
		return (dog);
	}
	return (NULL);
}
