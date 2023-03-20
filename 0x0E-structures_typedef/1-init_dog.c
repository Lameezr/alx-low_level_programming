#include <stdlib.h>
#include "dog.h"

/**
 * main - initializes a variable of type struct dop
 * @d: pointer to struct dog to initialize
 * @name: to initialize
 * @age: to initialize
 * @owner: to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
}
 
