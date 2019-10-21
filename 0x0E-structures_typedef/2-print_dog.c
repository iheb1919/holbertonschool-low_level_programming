#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print atributes of dog struct
 * @d:dog struct
 */
void print_dog(struct dog *d)
{
if (d)
{
if (!(d->name))
d->name = "(nil)";
if (!(d->owner))
d->owner = "(nil)";
}
printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
