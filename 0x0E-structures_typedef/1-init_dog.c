#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog with provided values.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Pointer to a string representing the dog's name.
 *  @age: Float value representing the dog's age.
 *  @owner: Pointer to a string representing the owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
