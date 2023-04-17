#include <stdlib.h>
#include "dog.h"

/**

init_dog - Initializes a variable of type struct dog.
@d: Pointer to struct dog to initialize.
@name: Name to initialize.
@age: Age to initialize.
@owner: Owner to initialize.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog)); // Allocate memory if pointer is NULL
d->name = name; // Set the name field of struct dog
d->age = age; // Set the age field of struct dog
d->owner = owner; // Set the owner field of struct dog
}
