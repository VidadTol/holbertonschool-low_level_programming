#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_cpy, *owner_cpy;
	int i, name_l = 0, owner_l = 0;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		name_l++;
	name_cpy = malloc(name_l + 1);
	if (name_cpy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < name_l; i++)
		name_cpy[i] = name[i];
	name_cpy[name_l] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		owner_l++;
	owner_cpy = malloc(owner_l + 1);
	if (owner_cpy == NULL)
	{
		free(name_cpy);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		owner_cpy[i] = owner[i];
	owner_cpy[owner_l] = '\0';
	new_dog->name = name_cpy;
	new_dog->age = age;
	new_dog->owner = owner_cpy;
	return (new_dog);
}
