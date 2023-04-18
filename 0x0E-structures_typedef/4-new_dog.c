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
	char *n, *o;

	dog = malloc(sizeof(dog_t));
	if (dog != NULL)
	{
		n = malloc(sizeof(*name));
		o = malloc(sizeof(*owner));
		if (n == NULL || o == NULL || age <= 0)
			return (NULL);
		n = name;
		o = owner;
		dog->name = n;
		dog->age = age;
		dog->owner = o;
		return (dog);
	}
	return (NULL);
}
