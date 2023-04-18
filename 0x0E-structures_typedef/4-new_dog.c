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
	int namec, ownerc, i, j;

	namec = ownerc = 0;
	dog = malloc(sizeof(dog_t));
	if (dog != NULL)
	{
		if (name == NULL || owner == NULL)
			return (NULL);
		
		while (*(name + namec))
			namec++;
		while (*(owner + ownerc))
			ownerc++;
		dog->name = malloc(sizeof(char) * (namec + 1));
		dog->owner = malloc(sizeof(char) * (ownerc + 1));
		if (dog->name == NULL)
			return (NULL);
		if (dog->owner == NULL)
			return (NULL);
		for (i = 0; i < namec; i++)
		{
			*(dog->name + i) = name[i];
		}
		*(dog->name + namec) = '\0';
		for (i = 0; i < ownerc; i++)
		{
			*(dog->owner + i) = owner[i];
		}
		*(dog->owner + ownerc) = '\0';
		dog->age = age;
		return (dog);
	}
	return (NULL);
}
