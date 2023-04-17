#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog -  Function that frees dogs
 * @d: Pointer to dog structure
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
