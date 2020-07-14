#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - init dog
 *struct dog - structure
 *@d: pointer
 *@name: pointer
 *@age: variable
 *@owner: pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
		d->name = name;
	d->age = age;
	d->owner = owner;
}
