#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	int i, j, k;

	doggo = malloc(sizeof(*doggo));
	if (!name || !owner || doggo == NULL)
	{
		free(doggo);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	doggo->name = malloc(sizeof(i + 1));
	doggo->owner = malloc(sizeof(j + 1));
	if (!(doggo->name) || !(doggo->owner))
	{
		free(doggo->name);
		free(doggo->owner);
		free(doggo);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		doggo->name[k] = name[k];
	doggo->name[k] = '\0';
	doggo->age = age;
	for (k = 0; k < j; k++)
		doggo->owner[k] = owner[k];
	doggo->owner[k] = '\0';
	return (doggo);
}
