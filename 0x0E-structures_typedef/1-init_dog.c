#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 *
 * @d: Pointer to dog structure
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: None
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
