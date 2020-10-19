#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Function that initialize a variable of type struct dog.
 * @d: Pointer to struct data
 * @name: String of the name of the dog
 * @age: Integer of the age of the dog
 * @owner: String of owner's name
 *
 * Return: Always void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
